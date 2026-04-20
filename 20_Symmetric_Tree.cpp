#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
        bool isMirror(TreeNode* L, TreeNode* R) {
            if (L == NULL && R == NULL) return true;
            if (!L || !R || L->val != R->val) return false;
            return isMirror(L->left, R->right) && isMirror(L->right, R->left); 
        }

        bool isSymmetric(TreeNode* root) {
            if (root == NULL) return true;
            return isMirror (root->left, root->right);
        }
}; 


int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution sol;
    if (sol.isSymmetric(root)) {
        cout<<"Result: Tree is Symmetric!" <<endl;
    } else {
        cout<<"Result: Tree is NOT Symmetric!" <<endl;
    }
    return 0;
}