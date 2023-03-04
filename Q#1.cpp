#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector <int> order_val(order.size(),0);
        for (int i = 0; i < order.size(); i++) {
            order_val[order[i]-'a'] = i;
        }
        for (int i = 0; i < words.size()-1; i++ ) {
            for (int j = 0; j < words[i].size(); j++) {
                if (j >= words[i+1].size()) {return false;}
                if (words[i][j] != words[i+1][j]) {
                    int currentchar = words[i][j]-'a';
                    int nextchar = words[i+1][j]-'a';
                    if (order_val[currentchar] > order_val[nextchar] ) {
                        return false;
                    }
                    else {break;}
                }   
            }
        }
        return true;

    }
};



int main() {

  return 0;
}
