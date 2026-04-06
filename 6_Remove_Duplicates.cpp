#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int> & nums) {
            if (nums.empty()) return 0;
            int j = 0;
            for (int i = 0; i < nums.size(); i++) {
               if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
               }
            }
            return j + 1;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = sol.removeDuplicates(nums);

    cout << "Unique Elements are: "<< k << endl;
    cout << "After removing duplicates Array: ";
    for (int i=0; i<k; i++){
        cout<<nums[i]<< " ";
    }
    cout<<endl;
    return 0;
}