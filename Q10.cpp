#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        map <char, int> roman_to_int {
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};

        for(int i = 0; i<s.size(); i++) {
            if(roman_to_int[s[i]] < roman_to_int[s[i+1]]) {
                result = result - roman_to_int[s[i]];
            }
            else {
                result = result + roman_to_int[s[i]];

            }
        }
        return result; 
    }
};


int main() {

  return 0;
}
