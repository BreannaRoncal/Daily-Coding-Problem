/*Daily Coding Problem #3:
 *
 *Given the root to a binary tree, implement 'serialize(root), 
 *which serializes the tree into a string, and deserialize(s), 
 *which deserializes the string back into the tree.
 *
 */
#include <iostream>
#include <fstream>

struct node{
    int key;
    node * rightChild;
    node * leftChild;
};
node * makeNode(int key){
    node * n = new node;
    n->key = key;
    n->leftChild = NULL;
    n->rightChild = NULL;

    return n;
}

void serialize(node * root, std::ofstream & filename){
    if (root == NULL){
        filename << "-1 ";
    }else{
        filename << root->key << " ";
        serialize(root->leftChild, filename);
        serialize(root->rightChild, filename);
    }
}

void deserialize(node *& root, FILE * filename){
    int inp;
    fscanf(filename, "%d", &inp);
    if (!inp || inp == -1){
        return;
    }else{
        root = makeNode(inp);
        deserialize(root->leftChild, filename);
        deserialize(root->rightChild, filename);
    }
}

void printTree(node * root){
    if (root != NULL){
        printTree(root->leftChild);
        printf("%d ", root->key);
        printTree(root->rightChild);
    }
}

int main(){
    
    //make a node to test functions
    struct node * n = makeNode(5);
    n->leftChild = makeNode(2);
    n->rightChild = makeNode(10);
    n->rightChild->rightChild = makeNode(20);
    n->rightChild->leftChild = makeNode(6);
    n->leftChild->rightChild = makeNode(1);
    n->leftChild->leftChild = makeNode(3);

    std::ofstream filename;
    filename.open("BinaryTree.txt");
    if (!filename){
        std::cout << "ERROR: file not found" << std::endl;
    }
    
    //call on serialize
    serialize(n, filename);
    filename.close();

    //call on deserialize
    node * newTree = NULL;

    FILE * fileIn = fopen("BinaryTree.txt", "r");
    deserialize(newTree, fileIn);

    std::cout << "~~~~~~~~PRINTED TREE~~~~~~~~~~~" << std::endl;
    printTree(newTree);
    std::cout << std::endl;
    return 0;
}
