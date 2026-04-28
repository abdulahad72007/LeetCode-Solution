#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    int maxProfit(vector<int> & prices) {
        int minPrice = 1e9;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
            minPrice = prices[i];
            } else if (prices[i] - minPrice > maxProfit) {
             maxProfit = prices[i] - minPrice;           
            }
        }
        return maxProfit;
    }
};

int main () {

    vector<int> prices = {2, 4, 5, 6, 8, 9};

    Solution sol;
    int result = sol.maxProfit(prices);

    cout<<"Maximum Profit you can earn: "<< result << endl;
    return 0;
}