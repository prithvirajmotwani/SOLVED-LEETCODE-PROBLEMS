#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for (int i = num.size()-1; i>=0; i--) {
            k = num[i]+k;
            num[i]= k %10;
            k = k/10;
        }
        while (k > 0) {
            num.insert(num.begin(),k%10);
            k /=10;
        }
        return num;
    }
};



int main() {

  return 0;
}
