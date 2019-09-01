#include <iostream>
#include <vector>

int main(){
    std::vector<int> testNumbers = {10, 15, 3, 7};
    int numToFind = 17;

    for (int i = 0; i < testNumbers.size(); i++){
        for (int j = 0; j < testNumbers.size(); j++){
            if (testNumbers[i] + testNumbers[j] == numToFind){
                std::cout << "true\n";
                return true;
            }
        }
    }
    std::cout << "false\n";
    return false;

    return 0;
}


#Time: O(n^2)
