#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;

    int k = 0;

    for(int i = 0; i < 3; i++){
        int star = n - k;
        if(star < 1) break;
        for(int j = 0; j < star; j++){
            cout << "*";
        }
        cout << endl;
        k+=2;
    }
    return 0;
}