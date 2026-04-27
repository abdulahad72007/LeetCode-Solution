# include <iostream>
# include <vector>
using namespace std;

class Solution {
    public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);      
        for (int i = 1; i < rowIndex; i++) {
            for (int j = i; j > 0; j--){
                row[j] = row [j] = row[j - 1];
            }
        }
        return row;
    }
};

void printV(const vector<int> & v) {
    cout << "[";
    for (int i = 0; i < v.size(); i++){
        cout<< v[i] << ( i == v.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main () {
    int index = 3;
    Solution sol;

    vector<int> result = sol.getRow(index);

    cout<<"Pascal's Triangle Row at Index " << index << " is: " << endl;
    printV(result);

    return 0;
}