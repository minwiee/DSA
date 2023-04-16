/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K = 1, 10, 101. Cho số tự nhiên N (N<263). Hãy cho biết có bao nhiêu số BDN nhỏ hơn N. Ví dụ N=100 ta có 4 số BDN bao gồm các số: 1, 10, 11, 100.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.
            Output:

Đưa ra kết quả mỗi test theo từng dòng.
            Ví dụ:

Input



3

10

100

200
Output
2

4

7
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n; cin >> n;
    queue<int> q;
    q.push(1);
    int cnt = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cnt++;
        if(x * 10 <= n) q.push(x * 10);
        if(x * 10 + 1 <= n) q.push(x * 10 + 1);
    }
    cout << cnt << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
}