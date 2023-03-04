#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 1;
        for (int i = digits.size()-1; i>=0; i--) {
            sum = digits[i]+sum;
            digits[i]= sum %10;
            sum = sum/10;
        }
        while (sum > 0) {
            digits.insert(digits.begin(),sum);
            sum /=10;
        }
        return digits;
    }
};


int main() {

  return 0;
}
