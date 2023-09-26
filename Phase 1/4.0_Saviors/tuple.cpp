/**
 * @Author: ShuvroWritesCode
 * @Date:   2023-09-26 11:25:36
 */

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    tuple<int, int, int> x;
    tuple<int, double, string> y;
    x = make_tuple(0, 1, 2);
    y = make_tuple(12, 34.03424, "ShuvroWritesCode");

    cout << (get<0>(x)) << ' ' << (get<1>(x)) << ' ' << (get<2>(x)) << '\n';
    cout << (get<0>(y)) << ' ' << (get<1>(y)) << ' ' << (get<2>(y)) << '\n';
    return 0;
}
