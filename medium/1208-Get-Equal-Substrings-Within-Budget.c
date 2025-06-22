#include <stdio.h>

int equalSubstring(char* s, char* t, int maxCost) {
    int stringLen = strlen(s);
    int leftPtr = 0;
    int rightPtr = 0;
    int currMax = 0;            // Max length found
    int currCount = 0;          // Curr length found
    int currSum = 0;            // Curr Cost
    
    int* costArr = (int*)calloc(stringLen+1, sizeof(int));
    for (int i = 0; i<= stringLen; i++){
        costArr[i] = abs(s[i] - t[i]);
    }

    while (rightPtr <= stringLen){
        
        if(currCount > currMax){
            currMax = currCount;
        }

        currSum += costArr[rightPtr];
        
        if ((rightPtr == leftPtr) && (currSum > maxCost)){
            currSum = 0;
            currCount = 0; 
            rightPtr++;
            leftPtr++;
        }
        else if(rightPtr == leftPtr){
            rightPtr++;
            currCount++;
        }
        else if(currSum <= maxCost){
            rightPtr++;
            currCount++;
        }
        else if(currSum > maxCost){
            currSum -= costArr[leftPtr];
            currSum -= costArr[rightPtr];
            leftPtr++;
            currCount--;
        }
    }


    return currMax;
}