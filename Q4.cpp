#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        while (tickets[k] != 0){
            for(int i = 0; i < tickets.size(); i++) {
                if (tickets[i] != 0) {
                    tickets[i] -= 1;
                    time += 1;
                }
                if (tickets[k] == 0) {break;}
            }
        }
        return time;
     }
};


int main() {

  return 0;
}
