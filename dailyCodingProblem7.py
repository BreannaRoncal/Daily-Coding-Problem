##Daily Coding Poblem #7:
##
##A unival tree (which stands for "universal value") is a tree
##where all nodes under it have the same value.
##
##Given the root to a binary tree, count the number of unival subtrees.
##
##For example, the following tree has 5 unival subtrees:
##
##   0
##  / \
## 1   0
##    / \
##   1   0
##  / \
## 1   1
##

class Node:
    def __init__(self, key, leftChild=None, rightChild=None):
        self.key = key
        self.leftChild = leftChild
        self.rightChild = rightChild


##Check to see if the tree is a universal tree
def isUnival(root):
    if root == None:
        return True
    if root.leftChild is not None and root.leftChild.key != root.key:
        return False
    if root.rightChild is not None and root.rightChild.key != root.key:
        return False
    if isUnival(root.leftChild) and isUnival(root.rightChild):
        return True

    return False

##recursively count the number of unival trees with help from the isUnival function
def numOfUnivalTrees(root):
    if root is None:
        return 0

    total = numOfUnivalTrees(root.leftChild) + numOfUnivalTrees(root.rightChild)
    if isUnival(root):
        total += 1

    return total


##create the tree from the example to test
rootToRightToLeft = Node(1, Node(1), Node(1))
rootToRight = Node(0, rootToRightToLeft, Node(0))
biTree = Node(0, Node(1), rootToRight)

print("Number of unival subtrees: " + str(numOfUnivalTrees(biTree)))
