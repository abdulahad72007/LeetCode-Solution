#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    int removeElement(vector<int> & num, int val) {
        int k=0;
       for (int i=0; i < num.size(); i++){
            if (num [i] != val){
                num[k] = num[i];
                k++;
            }
        }
        return k;
    }
};

int main (){
    Solution sol;
    vector<int> myNum = {1, 2, 2, 1};
    int target = 2;

    int newLength = sol.removeElement(myNum, target);

    cout<<"New Length is: " << newLength << endl;
    cout<< "Other Array Elements: ";
    for (int i =0; i < newLength; i++){
        cout << myNum[i] << " " << endl;
    }
    return 0;
}