#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
   int maxProfit(vector<int>& prices) {
    int profit = 0;
    int buying = prices[0];
    int prft_crnt = 0;

    for (int i = 0; i < prices.size(); i++) {
        if (buying > prices[i]) {
            buying = prices[i];
        }
        prft_crnt = prices[i]-buying;
        if (prft_crnt > profit) {
            profit = prft_crnt;
        }
    }
    return profit;

    }

};



int main() {

  return 0;
}
