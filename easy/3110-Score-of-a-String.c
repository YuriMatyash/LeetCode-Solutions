#include <stdio.h>

int scoreOfString(char* s) {
    int length = strlen(s);
    int sum = 0;

    for (int i = 1; i<length; i++){
        sum += abs(s[i-1] - s[i]);
    }
    return sum;
}