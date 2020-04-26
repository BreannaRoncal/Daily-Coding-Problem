


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
