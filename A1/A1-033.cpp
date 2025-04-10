#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s[0] == 'A' || s[0] == 'E' || s[0] == 'I' || s[0] == 'O' || s[0] == 'U') count++;
    }
    cout << count;
    return 0;
}