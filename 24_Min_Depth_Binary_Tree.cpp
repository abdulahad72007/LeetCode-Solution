#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) :  val (x), left(NULL), right(NULL){}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if (!root->left || !root->right) {
            return max(left, right) +1;
        }
        return min(left, right) +1;
    }
};


int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout <<"Minimum Depth of Tree: "<<sol.minDepth(root) << endl;
    return 0;
}