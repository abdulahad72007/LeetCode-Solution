#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    vector<vector<int>> generate (int numRows) {
        vector<vector<int>> r(numRows);

        for (int i=0; i < numRows; i++){
            r[i].resize (i+1);
            r[i][0] = r[i][i] = 1;

            for (int j =1; j < i; j++){
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
            }
        }
        return r;
    }
};

void printTriangle(vector<vector<int>>& triangle) {
    for (auto row : triangle) {
        for (int val : row){
            cout<<val<<"";
        }
        cout << endl;
    }
}


int main(){
    int rows = 5;
    Solution sol;
    vector<vector<int>> result = sol.generate(rows);

    cout << "Pascla's Triangle for "<<rows<<" rows: " << endl;
    printTriangle(result);
    
    return 0;
}