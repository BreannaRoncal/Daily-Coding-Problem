/**
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.
**/

#include <iostream>

using namespace std;

int findSubArr(int N, int S, int arr[]){
    int curr_sum = arr[0], start = 0, end;
    
    for(end = 1; end <= N; end++){
        while(curr_sum > S && start < end){
            curr_sum -= arr[start];
            start++;
        }
        
        if(curr_sum == S){
            cout << start + 1 << " " << end << endl;
            return 1;
        }
        
        if(end < N){
            curr_sum += arr[end];
        }
    }
    cout << -1 << endl;
    return -1;
}

int main()
 {

    int N = 5, S = 12;
	int arr[] = {1, 2, 3, 7, 5};
  
        
    findSubArr(N, S, arr);
    
	return 0;
}
