/*Daily Coding Problem #2:
 *
 *Given an array of integers, return a new array such that each element
 *at index 'i' of the new array is the product of all the numbers
 *in the original array except the one at 'i'
 *
 *For example:
 *original array = [1, 2, 3, 4, 5]
 *
 *new array = [120, 60, 40, 30, 24]
 *
 */ 



#include <iostream>
#include <array>

std::array<int, 5> productsOfArray(std::array<int, 5> original){
    std::array<int, 5> toReturn;
    int total = 1;

    //total is the equal to the product of the elements of the array
    for (int i = 0; i < original.size(); i++){
        total *= original[i];
    }
    
    //fill in the new array by taking the total and dividing it by the value at 'i'
    for (int i = 0; i < original.size(); i++){
        toReturn[i] = total /original[i];
    }

    return toReturn;
}

int main(){
    std::array<int, 5> inputArray = {1, 2, 3, 4, 5};
    std::array<int, 5> newArray = productsOfArray(inputArray);
    for (int i = 0; i < inputArray.size(); i++){
        std::cout << newArray[i] << "\n";
    }

    return 0;
}
