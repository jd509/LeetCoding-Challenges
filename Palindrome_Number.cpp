#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            int number = x;
            unsigned int reversed_number = 0;
            while(x!=0){
                int remainder = x%10;
                reversed_number = reversed_number*10+remainder;
                x/=10;
            }
            if(number == reversed_number)
                return true;
            else
                return false;
        }
        
    }
};