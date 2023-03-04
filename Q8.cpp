#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left,right;
        int l,r,mid;
        l = 0;
        r = nums.size()-1;
        while (l<r) {
            mid = (l+r)/2;
            if (mid > 0 ) {left =nums[mid-1];} else {left = nums[0];}
            if (mid < nums.size()-1) {right = nums[mid+1];} else {right = nums[nums.size()];}

            if (nums[mid] != left && nums[mid] != right) {return nums[mid];}
            if (mid % 2 == 0) {
                if (nums[mid] == right ) {l = mid+1;}
                else {r = mid-1;}
            }
            else {
                if (nums[mid] == left ) {l = mid+1;}
                else {r = mid-1;}
            }
        }
        return nums[l];
    }
};


int main() {

  return 0;
}
