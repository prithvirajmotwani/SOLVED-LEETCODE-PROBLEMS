#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        return binarysearch(nums,0,size-1,target);
        
    }
    int binarysearch(vector<int>& nums,int left, int right, int target) {
        int mid = (left+right)/2;
        if (left > right) {
            return left;
        }
        if (nums[mid] == target) {
            return mid;
        }
        else if (target<nums[mid]) {
            return binarysearch(nums,left,mid-1,target);
        }
        else {
            return binarysearch(nums,mid+1,right,target);
        }
    }
};



int main() {

  return 0;
}
