#include <iostream>
#include <vector>
#include <string>

using namespace std;
    class Solution{
        public:
        int strStr(string haystack, string needle) {
            int n = haystack.length();
            int m = needle.length();

            if (m>n) return -1;

            for (int i = 0; i<= n-m; i++){
            if (haystack.substr(i, m) == needle){
                return i;
                 }  
            }
          return -1;
         }
    };

int main(){
    Solution sol;
        string h, n;

        cout<<"---String Occurence Finder---"<<endl;
        cout<<"Enter the main string (Haystack): "<<endl;
        getline (cin, h);

        cout<<"Enter the string to find (Needle): "<<endl;
        getline(cin, n);

        int result = sol.strStr(h, n);

        if (result != -1){
            cout <<"Found at index: " << result << endl; 
        } else {
            cout << "Not Found (-1)" << endl;
        }
    return 0;
}