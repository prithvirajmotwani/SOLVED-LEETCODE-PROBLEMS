#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool checkTree(TreeNode* root) {
        return root->val == root->left->val+root->right->val;
        
    }
};



int main() {

  return 0;
}
