"""
Daily Coding Problem #11:
Given an array of distinct integers. The task is to count all the triplets
such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. Each test case consists of two lines.
First line of each test case contains an Integer N denoting size of array
and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line.
If no such triplets can form, print "-1".

Example:
input: array = [1, 5, 3, 2]
output: 2
    1 + 2 = 3
    2 + 3 = 5

"""

#import array

def findTriplet(arr, N):
    #initialize the total number of triples
    total = 0
    
    #iterate through each integer in the array
    for i in range(N):
        #set j to be the next largest integer
        #and k to be the smallest integer
        j = i + 1
        k = N - 1
        
        #used to make sure we do not do duplicate tests
        while (j < k):
            #if a triplet is successfully found
            if (arr[j] + arr[k] == arr[i]):
               total = total + 1
               j += 1
            #if the sum is less than the target integer, then increase the smallest triple
            elif (arr[j] + arr[k] < arr[i]):
                k -= 1
                
            else:
                j += 1
    
    if(total == 0):
        print(-1)
    else:
        print(total)
    
    


def main():
    arr = [1, 5, 3, 2]
    N = len(arr)
    
    #sort the array in descending order
    arr.sort(reverse = True)
    findTriplet(arr, N)


    

main()
