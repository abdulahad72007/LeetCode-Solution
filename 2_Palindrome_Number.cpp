#include <iostream>
using namespace std;

class Solution {
    public:
    bool isPalindrome(int x){
        if (x < 0 || ( x % 10 == 0 && x!= 0 ))
        return false;

        long long reversedNum = 0;
        int original = x;

        while (x > 0){
            int lastDigit = x % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            x = x/10;
        }
        return original == reversedNum;
    }
};

int main(){
    Solution obj;
    int n;
    cout << "Enter a Number: "<<endl;
    cin >> n;

    if (obj.isPalindrome(n)){
        cout<< n <<" is a Palindrome."<<endl;
    } else {
        cout << n << " is not a Palindrome."<<endl;
    }
    return 0;
}