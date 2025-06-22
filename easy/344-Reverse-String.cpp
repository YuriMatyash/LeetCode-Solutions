#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size();
        int leftPtr = 0;
        int rightPtr = length - 1;
        char temp;
        for (int i = 0 ; i< length/2; i++){
            temp = s[leftPtr];
            s[leftPtr] = s[rightPtr];
            s[rightPtr] = temp;
            leftPtr++;
            rightPtr--;
        }
    }
};