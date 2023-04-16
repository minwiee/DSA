/*
Một người có cái túi thể tích V (V<1000). Anh ta có N đồ vật cần mang theo (N≤1000), mỗi đồ vật có thể tích là A[i] (A[i]≤100) và giá trị là C[i] (C[i]≤100). Hãy xác định tổng giá trị lớn nhất của các đồ vật mà người đó có thể mang theo, sao cho tổng thể tích không vượt quá V.
Input
Dòng đầu ghi số bộ test T (T<10)
Mỗi bộ test gồm ba dòng. Dòng đầu ghi 2 số N và V. Dòng tiếp theo ghi N số của mảng A. Sau đó là một dòng ghi N số của mảng C.
Dữ liệu vào luôn đảm bảo không có đồ vật nào có thể tích lớn hơn V.
Output
Với mỗi bộ test, ghi trên một dòng giá trị lớn nhất có thể đạt được.
*/
/*
    DSAKT055 == DSA05027
*/
#include<bits/stdc++.h>
using namespace std;
int n, v, weight[1005], cost[1005];
int f[1005][1005];
int qhd(){
    // int f[1005][1005];
    memset(f,0,sizeof(f));
    for(int i = 1; i <= n; i++){
        //khoi luong j van nho hon trongluong tui v
        for(int j = 1; j <= v; j++){
            //k lay do thu i -> van = do thu i-1
            f[i][j] = f[i-1][j];
            //neu lay duoc do thu i
            if(j >= weight[i]) f[i][j] = max(f[i][j], f[i-1][j-weight[i]] + cost[i]);
        }
    }
    return f[n][v];
}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        cin >> n >> v;
        for(int i = 1; i <= n; i++) cin >> weight[i];
        for(int i = 1; i <= n; i++) cin >> cost[i];
        cout << qhd() << "\n";
    }
}