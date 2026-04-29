#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
    public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() -1;
        while (l < r) {
            if (!isalnum(s[l])) l++;
            else if (!isalnum(s[r])) r--;
            else{
                if (tolower(s[l]) != tolower(s[r])) return false;
                l++, r--;
            }
        }
        return true;
    }
};


int main(){
    Solution sol;    
    string s = "A man, a plan, a canal: Panama";
    cout << (sol.isPalindrome(s) ? "Palindrome ✅" : "Not Palindrome ❌") << endl;
    return 0;
}