#include <stdio.h>

void preFixArray(int* arr, int newArr[], int start, int end){
    newArr[start] = arr[start];
    for (int i = start+1; i < end; i++)
        newArr[i] = newArr[i-1] ^ arr[i];
}
int countTriplets(int* arr, int arrSize) {
    int preFixArr[arrSize];
    int total = 0;
    for (int i = 0; i< arrSize - 1; i++){
        preFixArray(arr, preFixArr, i, arrSize);
            for (int j = i+1; j< arrSize; j++){  
                if (preFixArr[j] == 0){
                    total += j-i;
                }
            }
    }
    return total;
}