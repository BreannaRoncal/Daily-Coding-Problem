/*Daily Coding Problem #6:
 *
 *Given the mapping a = 1, b = 2, ..., z = 26
 *and an encoded message, count the number of ways
 *it can be decoded.
 *conditions: no leading 0's, no extra trailing 0's, no consecutive 0's
 *
 *For example:
 *The message '111' would give 3, since it could be
 *decoded as 'aaa', 'ka', and 'ak'
 *
 */


#include <iostream>
#include <cstring>

//The solution uses dynamic programming to count the number of ways the
//message can be decoded

int numberOfWays(char * num, int msgSize){
    
    //array to keep track of subproblems
    int total[msgSize + 1];
    total[0] = 1;
    total[1] = 1;

    //base case
    if (num[0] == '0'){
        return 0;
    }
    for (int i = 2; i <= msgSize; i++){
        total[i] = 0;

        //check if last number is a decoding
        if (num[i - 1] > '0'){
            total[i] = total[i - 1];     
        }

        if (num[i -2] == '1'){
            total[i] += total[i - 2];
        }
    
        //check to see if the last two digits is a valid number
        //in the alphabet (<= 26)
        if (num[i - 2] == '2' && num[i - 1] < '7'){
            total[i] += total[i - 2];
        }
    }

    return total[msgSize];
}

int main(){
    char msg[] = "1234";
    int msgSize = strlen(msg);

    std::cout << "Number of ways: " << numberOfWays(msg, msgSize) << std::endl;

    return 0;
}

