#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
   
    string roman[]  = {"M", "CM", "D", "CD", "C", "XC", "L",
        "XL", "X", "IX", "V", "IV", "I"};
    int    value[]  = {1000, 900, 500, 400, 100, 90, 50,
            40, 10, 9, 5, 4, 1};

    for(int i = 0; i < 13; i++) {
        while(n >= value[i]) {
            cout << roman[i];
            n -= value[i];
        }
    }
    return 0;
}