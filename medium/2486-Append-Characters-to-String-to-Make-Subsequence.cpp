#include <string>

using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
    int tPtr = 0;
    int sPtr = 0;
    int tLen = t.length();
    int sLen = s.length();
    int count = 0;

    while (tPtr < tLen && sPtr < sLen){
        if (s[sPtr] == t[tPtr]){
            tPtr++;
            sPtr++;
        }
        else{
            sPtr++;
        }
    }
    count = tLen - tPtr;
    
    return count;
    }
};