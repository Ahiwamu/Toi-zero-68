#include <bits/stdc++.h>

using namespace std;

auto comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    priority_queue<int> q;
    vector<pair<int, int>> x;
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        x.push_back({a, b});
    }

    sort(x.begin(), x.end());  

    for(int i = 0; i < n-1; i++){
        for(int j = n-1; j > i; j--){
            int deltaX = abs(x[i].first - x[j].first);
            int deltaY = abs(x[i].second - x[j].second);

            if(deltaX == deltaY){
                q.push(deltaX);
                break;
            }
        }
    }

    if(q.empty()){
        cout << 0;
    }
    else{
        cout << q.top();
    }
    return 0;
}