#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector <int> vect;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root != NULL) {
            inorderTraversal(root->left);
            vect.push_back(root->val);
            inorderTraversal(root->right);
        }
        return vect;
    }
};



int main() {

  return 0;
}
