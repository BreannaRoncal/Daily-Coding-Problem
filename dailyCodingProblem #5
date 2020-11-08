##
##Daily Coding Problem #5:
## cons(a, b) constructs a pair, and car(pair) and cdr(pair)
## returns the first and last element of that pair.
## For example, car(cons(3, 4)) returns 3,
## and cdr(cons(3, 4)) returns 4.
##

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def getFirstElem(a, b):
    return a

def car(pair):
    return pair(getFirstElem)

def getSecondElem(a, b):
        return b

def cdr(pair):
    return pair(getSecondElem)

ogPair = cons(3, 4)
print("This is the original pair: (3, 4)\n")
print("This is the first element: " + str(car(ogPair)) + "\n")
print("This is the second element: " + str(cdr(ogPair)) + "\n")
