"""
Daily Coding Problem #14:
Given two sorted arrays, the task is to merge them in a sorted manner
with O(1) extra space

Example:
Input:
    arr1[] = {1, 5, 6, 10, 15, 20}
    arr2[] = {2, 3, 8, 13}
    
Output:
    arr1[] = {1, 2, 3, 5, 8, 9}
    arr2[] = {10, 13, 15, 20}

"""

def merge(arr1, arr2, size1, size2):
    #iterate through the second array starting at the end
    for i in range(size2-1, -1, -1):

        #find the smallest element that is greater
        #than arr2[]
        last_elem = arr1[size1-1]
        j = size1 - 2
        while(j >= 0 and arr1[j] > arr2[i]):
            arr1[j + 1] = arr1[j]
            j -= 1

        #if there was a greater element, then swap
        if (j != size1-2 or last > arr2[i]):
            arr1[j + 1] = arr2[i]
            arr2[i] = last_elem
    

def main():
    arr1 = [1, 5, 6, 10, 15, 20]
    arr2 = [2, 3, 8, 13]

    size1 = len(arr1)
    size2 = len(arr2)

    print("Before: ")
    print("arr1: ", end = " ")
    for i in arr1:
        print(i, end = " ")

    print()

    print("arr2: ", end = " ")
    for i in arr2:
        print(i, end = " ")
    print()

    merge(arr1, arr2, size1, size2)

    print("After: ")
    print("arr1: ", end = " ")
    for i in arr1:
        print(i, end = " ")

    print()

    print("arr2: ", end = " ")
    for i in arr2:
        print(i, end = " ")

    

main()
