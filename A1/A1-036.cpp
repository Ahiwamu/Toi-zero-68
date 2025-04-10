#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    n = n - n % 10;
    while(n >= 0){
        cout << n << " ";
        n -= 10;
    }
    return 0;
}