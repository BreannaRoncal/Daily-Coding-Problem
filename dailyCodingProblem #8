#Daily COding Problem #8
#
#There exists a staircase with N steps,
#and you can climb up either 1 or 2 steps at a time.
#
#Given N, write a function that returns the number of unique
#ways you can climb the staircase. The order of the steps matters.
#
#For example, if N is 4, then there are 5 unique ways:
#
#1, 1, 1, 1
#2, 1, 1
#1, 2, 1
#1, 1, 2
#2, 2

# N | unique ways
#-----------------
# 1 | 1
# 2 | 2
# 3 | 3
# 4 | 5
# 5 | 8

# number of unique ways is fibonacci(n + 1)

def fibNum(N):
    if N == 0 or N == 1:
        return N
    else:
        return fibNum(N - 1) + fibNum(N - 2)

def numUniqueWays(num_stairs):
    return fibNum(num_stairs + 1)

def main():
    for i in range(1, 6):
        print('N: ' + str(i) + ' -> ' + str(numUniqueWays(i)))

main()

