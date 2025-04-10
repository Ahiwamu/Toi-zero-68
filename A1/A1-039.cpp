#include <bits/stdc++.h>

using namespace std;

int arr[100];
bool check[100];

int fac(int n){
    if(n <= 1) return 1;
    else return n * fac(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << fac(n);
    return 0;
}