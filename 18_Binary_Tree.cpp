#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode (int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void helper(TreeNode* root, vector<int>& res){
        if (root == NULL) return;
        helper(root->left, res);
        res.push_back(root->val);
        helper(root->right, res);
    }

        vector<int> inorderTraversal(TreeNode* root){
            vector<int> res;
            helper(root, res);
            return res;

        }
};


int main(){
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    
    Solution sol;
        vector <int> result = sol.inorderTraversal(root);

        cout<<"Inorder Traversal Result: ";
        for (int x : result ) {
            cout << x << " ";
        }
        cout << endl;
    return 0;
}