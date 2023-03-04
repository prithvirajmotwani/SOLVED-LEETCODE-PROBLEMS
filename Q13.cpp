#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            // vp = valid parentheses
            stack <char> vp;
            for (int i = 0; i < s.length(); i++) {
                
                if (s[i] == '{' || s[i] == '[' || s[i] == '(' ) {
                    vp.push(s[i]);
                }
                else {
                    if (!vp.empty()) {
                        char m = vp.top();
                        vp.pop();
                        if (!valid(m, s[i])) {
                            return false;
                        }
                    }
                    else {
                        return false;
                    }
                }
            }
            if (vp.empty()) {
                return true;
            }
            else {
                return false;
            }
        }
        bool valid(char par1, char par2) {
            if ( (par1 == '(' && par2 == ')') || (par1 == '{' && par2 == '}') || (par1 == '[' && par2 == ']') ){
                return true;
            }
            else {
                return false;
            }
        }
    };



int main() {

  return 0;
}
