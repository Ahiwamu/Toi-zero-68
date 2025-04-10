#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> n;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        q.push(k);
    }
    
    cout << q.top();
    return 0;
}