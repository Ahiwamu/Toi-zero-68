#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    while(n != 5){
        cin >> n;
        if(n == 1) sum += 100;
        else if(n == 2) sum += 120;
        else if(n == 3) sum += 200;
        else if(n == 4) sum += 60;
    }
    cout << "Bye Bye" << endl;
    cout << "Total Calories: " << sum;
    return 0;
}