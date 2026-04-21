#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
    public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth (root->right);
        return max(leftDepth, rightDepth) + 1;
    }
};

int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(20);
    root->right = new TreeNode(9);

    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(15);

    Solution sol;
    int depth = sol.maxDepth(root);
    cout<<"Max depth is: "<< depth <<endl;
    return 0;
}