#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
    public:
    vector<int> plusOne(vector<int> & digits){
            int n = digits.size();

    for (int i = n - 1; i>= 0; i--){
        if (digits[i] < 9){
            digits[i]++;
            return digits;
            }
        digits[i] = 0;
        digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main(){
    Solution sol;
    vector<int> test = {1, 2, 3};

    cout<<"Original Number: 123" << endl;

    vector<int> result= sol.plusOne(test);

    cout<<"After Plus One: ";
    for (int x : result){
        cout << x;
    }

    cout << endl;
    return 0;
}