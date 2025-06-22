#include <stdio.h>
#include <stdbool.h>

// Solution without Converting to string.

int numOfDigits(int x);                     // Returns number of digits of a number

bool isPalindrome(int x) {
    if (x < 0){
        return false;
    }
    if (x < 10){
        return true;
    }
    int size = numOfDigits(x);
    int* newArr = (int*)malloc(size*sizeof(int));
    int i = 0;

    while (i < size){
        newArr[i] = x % 10;
        x /= 10;
        i++;
    }

    i = 0;
    while (i < size){
        if(newArr[i] != newArr[size-1]){
            free(newArr);
            return false;
        }
        i++;
        size--;
    }
    free(newArr);
    return true;
}

int numOfDigits(int x){                     // Returns number of digits of a number
    if (x < 10)
        return 1;
    else 
        return (1 + numOfDigits(x/10));
}