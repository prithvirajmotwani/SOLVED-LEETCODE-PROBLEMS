#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        char array[num.length()];
        int j = 0;
        for (int i=num.length()-1; i>=0; i--) { 
            array[j++] = num[i];
        }
        for(int i = 0; i < num.length(); i++) {
            if (num[i] != array[i]){
                return false;
            }
        }
        return true;
    }
};


int main() {

  return 0;
}
