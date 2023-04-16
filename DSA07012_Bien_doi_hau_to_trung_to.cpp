/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng trung tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
T, exp thỏa màng ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Ví dụ:

Input



2

ABC++

AB*C+
Output
(A+(B+C)

((A*B)+C)
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(string s){
    int n = s.size();
    stack<string> st;
    for(int i = 0; i < n; i++){
        char x = s[i];
        if(x == '+' || x == '-' || x == '*' || x == '/'){
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            st.push('(' + b + x + a + ')');
        }
        else st.push(string(1,x));
    }
    cout << st.top() << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        Solve(s);
    }
}