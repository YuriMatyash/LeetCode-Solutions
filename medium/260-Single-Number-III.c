#include <stdio.h>

int* singleNumber(int* nums, int numsSize, int* returnSize) {

    int xorDifference = 0;
    unsigned int lowestBit=0;
    int* answer = (int*)calloc(2, sizeof(int));

    for(int i = 0; i<numsSize; i++){
        xorDifference = xorDifference ^ nums[i];
    }

    lowestBit = xorDifference & -(unsigned int)xorDifference;
    
    for(int i = 0; i<numsSize; i++){
        if ((lowestBit & nums[i]) == 0) {
            answer[0] =  answer[0] ^ nums[i];
        } 
        else {
            answer[1] = answer[1] ^ nums[i];
        }
    }
        
    *returnSize = 2;
    return answer;
}