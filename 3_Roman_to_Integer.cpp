#include <iostream>
#include <string>
using namespace std;

class solution {
    public:
    int getValue (char r){
        switch (r){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default: return 0;
        }
    }

    int romanToInt (string s){
        int total = 0;
        for (int i = 0; i < s.length(); i++){
            int current = getValue(s[i]);
            int next = (i + 1 < s.length()) ? getValue(s[i+1]) : 0;

            if (current < next) {
                total -= current;
            }else{
                total += current;
            }
        }
        return total;
    }
};

int main(){
   solution obj;
    string s= "MCMXCIV";
    cout << "Roman: " << s << " -> Integer: " << obj.romanToInt(s) << endl;
    return 0;
}