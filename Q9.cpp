#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if (x==0) {return 0;}
        long long int first =1; long long int last = x;
        while (first <= last) {
            long long int mid = (first + last) / 2;
            if ( mid == x/mid) {
                return mid;
            }
            else if (mid < x/mid) {
                first = mid+1;
            }
            else {
                last = mid-1;
            }
        }
        return last;
    }
};


int main() {

  return 0;
}
