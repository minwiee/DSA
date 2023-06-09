/*
Yêu cầu bạn xây dựng một hàng đợi hai đầu với các truy vấn sau đây:

“PUSHFRONT x”: Thêm phần tử x vào đầu của dequeue (0 ≤ x ≤ 1000).

“PRINTFRONT”: In ra phần tử đầu tiên của dequeue. Nếu dequeue rỗng, in ra “NONE”.

“POPFRONT”: Xóa phần tử đầu của dequeue. Nếu dequeue rỗng, không làm gì cả.

“PUSHBACK x”: Thêm phần tử x vào cuối của dequeue (0 ≤ x ≤ 1000).

“PRINTBACK”: In ra phần tử cuối của dequeue. Nếu dequeue rỗng, in ra “NONE”.

“POPBACK”: Xóa phần tử cuối của dequeue. Nếu dequeue rỗng, không làm gì cả.

Dữ liệu vào:

Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).

Mỗi truy vấn có dạng như trên.

Kết quả: 

Với mỗi truy vấn “PRINTFRONT” và “PRINTBACK”, hãy in ra kết quả trên một dòng.

Ví dụ:

Input



10

PUSHBACK 1

PUSHFRONT 2

PUSHBACK 3

PRINTFRONT

POPFRONT

PRINTFRONT

POPFRONT

PRINTBACK

POPFRONT

PRINTBACK

 
Output
2

1

3

NONE
*/

#include<bits/stdc++.h>
using namespace std;
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    deque<int> q;
    int t; cin >> t;
    while(t--){
        string s; 
        cin >> s;
        if(s == "PUSHFRONT"){
            int x; cin >> x;
            q.push_front(x);
            continue;
        }
        if(s == "PUSHBACK"){
            int x; cin >> x;
            q.push_back(x);
            continue;
        }
        if(s == "POPFRONT"){
            if(!q.empty()) q.pop_front();
            continue;
        }
        if(s == "POPBACK"){
            if(!q.empty()) q.pop_back();
            continue;
        }
        if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE" << "\n";
            else cout << q.front() << "\n";
            continue;
        }
        if(s == "PRINTBACK"){
            if(q.empty()) cout << "NONE" << "\n";
            else cout << q.back() << "\n";
            continue;
        }
    }
}