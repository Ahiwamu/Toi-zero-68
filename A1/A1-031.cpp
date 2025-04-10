#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int size = s.size();

    for(int i = 0; i < size; i++){
        cout << s[i];
        if(i == (size - 1) % 3 && size != 3) cout << ",";
    }
    return 0;
}