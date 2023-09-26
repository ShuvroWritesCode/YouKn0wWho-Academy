/*
 * @Author: ShuvroWritesCode
 * @Date:   2023-09-26 10:48:05
*/

#include<bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    cout << a[0] << ',' << a[1] << ',' << a[2] << '\n';

    int size = a.size();
    for (int i = 0; i < size; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    vector<int> b;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        b.push_back(x);
    }
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << ' ';
    }
    cout << '\n';
    b.pop_back();
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << ' ';
    }
    cout << '\n';
    return 0;
}