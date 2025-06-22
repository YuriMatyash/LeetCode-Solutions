#include <stdio.h>

int firstUniqChar(char* s) {
    int arr[26] = {0};
    int size = strlen(s);
    for (int i = 0; i<size; i++){
        arr[s[i]-'a']++;
    }
    for (int i = 0; i<size; i++){
        if(arr[s[i]-'a'] == 1){
            return i;
        }
    }
    return -1;
}