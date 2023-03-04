#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> leafs1;
        vector <int> leafs2;
        Leafsequence(root1,leafs1);
        Leafsequence(root2,leafs2);
        return leafs1 == leafs2;
        
    }
    void Leafsequence(TreeNode* root, vector <int> &leafs) {
        if (root==NULL) {
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            leafs.push_back(root->val);
            return;
        }
        Leafsequence(root->left, leafs);
        Leafsequence(root->right, leafs);
    }

};


int main() {

  return 0;
}
