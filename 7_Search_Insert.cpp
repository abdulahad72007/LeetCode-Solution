#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
    int searchInsert(vector<int> & nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while ( low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] = target) {
                return mid;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else{
                high = low - 1;
            }
        }
        return low;
    }
};

int main () {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target;

    cout<<"Array Elements: {1, 3, 5, 6}" << endl;
    cout<<"Enter target value to Search/insert: ";

    int result = sol.searchInsert(nums, target);

    cout << "The target should be at index: " << result << endl;

    return 0;
}