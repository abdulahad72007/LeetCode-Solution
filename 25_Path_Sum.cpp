#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode (int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return false;

        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};


int main(){
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    int sum = 27;
    Solution sol;
    if (sol.hasPathSum(root, sum)) {
        cout << "Path with Sum "<<sum<< " exists!"<< endl;
    } else {
        cout << "Path does not exist!" << endl;
    }

    return 0;
}