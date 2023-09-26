/*
 * @Author: ShuvroWritesCode
 * @Date:   2023-09-26 10:43:42
*/

#include<bits/stdc++.h>
using namespace std;

int yo(int x) {
    return x * (x +1) / 2;
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    auto ans = yo(10);
    cout << ans << '\n';

    return 0;
}