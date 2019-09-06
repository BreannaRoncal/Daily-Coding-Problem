/*Daily Coding Problem #4:
 * Given and array of integers, find the first missing positive integer
 *in linear time and constant space. In other words, find the lowest
 *positive integer that does not exist in the array. The array can 
 *contain duplicates and negative numbers as well.
 *
 *
 * For example:
 * input array = [3, 4, -1, 1]
 *
 * output = 2
 *`
 */

#include <iostream>

void sort(int toSort[], int arraySize){
    bool isSorted = false;
    while (isSorted == false){
        isSorted = true;
        for (int i = 0; i < arraySize - 1; i++){
            for (int j = i + 1; j < arraySize; j++){
                if (toSort[j] < toSort[i]){
                    std::swap(toSort[i], toSort[j]);
                    isSorted = false;
                }
            }
        }
    }
}
int firstMissingNum(int array[], int arraySize){
    for (int i = 0; i < arraySize - 1; i++){
        for (int j = i + 1; j < arraySize; j++){
            std::cout << "array[i]: " << array[i] << std::endl;
            std::cout << "array[j]: " << array[j] << std::endl;
            if (array[j] == array[i] || array[i] <= 0){
                continue;
            }else if (array[j] != array[i] + 1){ 
                return array[i] + 1;
            }
        }
    }
    return -1;
}

int main(){
    int inp[] = {3, 4, -1, 1};
    int arraySize = sizeof(inp) / sizeof(inp[0]);
    sort(inp, arraySize);
    int toFind = firstMissingNum(inp, arraySize); 
    if (toFind == -1){
        std::cout << "no missing number in array" << std::endl;
    }else{
        std::cout << "Missing number is: " << toFind << std::endl; 
    }
    for (int i = 0; i < arraySize; i++){
        std::cout << inp[i] << std::endl;
    }
    
    return 0;

}
