#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
    TreeNode* sortedArrayToBST(vector<int>& nums){
        return helper (nums, 0, nums.size() -1);
    }

        TreeNode* helper(vector<int> & nums, int left, int right){
            if (left > right )return NULL;
            int mid = left + (right - left) / 2;

            TreeNode* root = new TreeNode(nums[mid]);

            root->left = helper(nums, left, mid -1);
            root->right = helper(nums, mid + 1, right);
            
            return root;
    }
};

int main(){
    vector<int> numbers = {-10, -3, 0, 5, 9};
    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(numbers);
    cout << "BST Constructed Successfully!" << endl;
    return 0;
}