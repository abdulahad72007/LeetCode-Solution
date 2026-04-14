#include <iostream>
using namespace std;

class Solution {
    public:
        int mySqrt(int x){
            if (x == 0) return 0;
            long long low = 1, high = x, ans =0;
        
            while (low<=high) {
                long long mid = low+(high-low) / 2;
                if (mid * mid <= x){
                    ans = mid;
                    low = mid + 1;
                } else {
                    high = mid -1;
                }
            }
            return (int)ans;
        }
};

int main () {
    Solution sol;
    int x = 8;
    cout<<"Number: "<< x << endl;
    cout<<"Square Root (Integar) : "<< sol.mySqrt(x) << endl;
    return 0;
}