#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> freq;
        for (auto x: nums) {
            freq[x]++;
        }
        for (int i=0; i<nums.size(); i++) {
            if (freq[nums[i]] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};


int main() {

  return 0;
}
