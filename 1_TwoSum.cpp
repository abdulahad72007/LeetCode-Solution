#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        for (int i = 0; i < num.size(); i++) {
            for (int j = i + 1; j < num.size(); j++) {
                if (num[i] + num[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};


int main() {
    Solution s;
    vector<int> n = {2, 7, 11, 15};
    int t = 9;
    
    vector<int> result = s.twoSum(n, t);
    
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    
    return 0;
}