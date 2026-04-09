#include <iostream>
#include <string>
#include <vector>

using namespace std;
  
class Solution{
    public:
        int lengthOfLastWord(string s){
            int n = s.length();
            int length = 0;

            for (int i = n-1; i>=0; i--){
                if(s[i] == ' ' && length == 0){
                    continue;
                }
                if (s[i] != ' '){
                    length++;
                }else{
                    break;
                }
            }
            return length;
        }
};

int main(){
    Solution sol;
    string input;

    cout<<"--- Length of the Last Word Tester---" << endl;
    cout<<"Enter a sentence: ";
     
    getline(cin, input);

    int result = sol.lengthOfLastWord(input);

    cout<<"The Length of Last word is: "<<result<<endl;
    return 0;
}