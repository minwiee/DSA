#include<bits/stdc++.h>
using namespace std;
int n, a[100];
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;       
        a[1] = 1;
        a[2] = 2;
        a[3] = 4;
        for(int i = 4; i <= n; i++) a[i] = a[i-1] + a[i-2] + a[i-3];
        cout << a[n] << "\n";
    }
}