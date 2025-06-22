#include <stdio.h>

int lengthOfLongestSubstring(char* s) {
    int max = 0;
    int counter = 0;
    int arr[127] = {0};
    int size = strlen(s);
    int last = 0;

    for(int i=0; i<size; i++){
        if(arr[s[i]-0] == 0){
            arr[s[i]-0]++;
            counter++;
        }
        else{
            if(counter > max){
                max = counter;
            }
            counter = 0;

            
            while(s[last] != s[i]){
                last++;
            }

            last++;
            i = last;
            i--;
            for(int j = 0; j<127; j++){
                arr[j] = 0;
            }
        }
    }
    if(counter > max){
            max = counter;
        }
    return max;
}