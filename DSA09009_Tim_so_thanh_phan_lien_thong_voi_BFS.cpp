/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy tìm số thành phần liên thông của đồ thị bằng thuật toán BFS.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra số thành phần liên thông của đồ thị bằng thuật toán BFS.
      Ví dụ:

Input:


1

6  6 
Output:

1 2 1 3 2 3 3 4 3 5 4 5

2
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        
    }
}
