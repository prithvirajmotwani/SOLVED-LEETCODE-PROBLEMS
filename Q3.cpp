#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        if (s.length() == 1) {return 1;}
        for (int i = s.length()-1; i>=0; i--) {
            if (s[i] == ' ') {continue;}
            else {
                count++;
                if (i==0) {break;}
                if (s[i-1] == ' ') {break;}
            }
        }
        return count;
    }
};


int main() {

  return 0;
}
