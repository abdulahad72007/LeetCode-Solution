#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution{
    public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;

        int i = a.length();
        int j = b.length();

        while (i >= 0 || j>=0 || carry) {
            int sum = carry;
            if (i>= 0) sum+= a[i--] - '0';
            if (j>= 0) sum+= b[j--] - '0';

            res += (sum % 2) + '0';
            carry = sum / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main () {
Solution sol;

    string a = "1010";
    string b = "1011";

    cout << "Binary String 1: " << a << endl;
    cout << "Binary String 2: " << b << endl;

    string result = sol.addBinary(a, b);

    cout << "Binary Sum: " << result << endl;
    return 0;
}