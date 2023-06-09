/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết chương trình thực hiện chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách kề của các đỉnh tương ứng theo khuôn dạng của ví dụ dưới đây. Các đỉnh trong danh sách in ra theo thứ tự tăng dần.
     Ví dụ:

 

Input:


1

6  9

1  2

2  5

3  1

3  2

3  5

4  3

5  4

5  6

6  4
Output:

1: 2

2: 5

3: 1 2 5

4: 3

5: 4 6

6: 4
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m;
        vector<int> List[n+1];
        for(int i = 1; i <= m; i++){
            cin >> x >> y;
            List[x].push_back(y);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int v : List[i]){
                cout << v << " ";
            }
            cout << "\n";
        }
    }
}