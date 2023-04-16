/*
Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤104; 1≤ k ≤103; 1≤ A[i] ≤105.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:


2
5
5 5 4 6 4
5
9 9 9 2 5
Output:

4 4 5 5 6
9 9 9 2 5
*/
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second > b.second) return 1;
    if(a.second == b.second and a.first < b.first) return 1;
    return 0;
}
main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<int,int>> vt;
        for(int i = 0; i < n; i++){
            vt.push_back(make_pair (a[i], mp[a[i]]));
        }
        sort(vt.begin(), vt.end(), cmp);
        for(int i = 0; i < n; i++){
            cout << vt[i].first << " " ;
        }
        cout << "\n";
    }
}