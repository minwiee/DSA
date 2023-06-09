/*
Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra  X = 90.

Input:

Dòng đầu tiên ghi lại số lượng test T (T≤100).
Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N được ghi trên một dòng (N≤100).
Output:

Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được .
Ví dụ:

Input



2

5

7
Output
90

9009
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n; cin >> n;
    queue<int> q;
    q.push(9);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x % n == 0 ){
            cout << x << "\n";
            return;
        }
        q.push(x * 10);
        q.push(x * 10 + 9);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
}