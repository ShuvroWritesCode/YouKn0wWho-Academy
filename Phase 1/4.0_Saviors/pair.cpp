/*
 * @Author: ShuvroWritesCode
 * @Date:   2023-09-26 11:13:26
*/

#include<bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    pair<int, int> point;
    point = make_pair(0, 3);
    cout << point.first << ' ' << point.second << '\n'; // output = 0 3

    pair<double, double> p1, p2, p3;
    p1 = make_pair(2.3, 3.4);
    p2 = make_pair(1.0, 4.2);
    p3 = make_pair(2.4, 3.1);
    swap(p1, p2);
    cout << p1.first << ' ' << p1.second << '\n'; // output = 1 4.2
    cout << p2.first << ' ' << p2.second << '\n'; // output = 2.3 3.4
    cout << p3.first << ' ' << p3.second << '\n'; // output = 2.4 3.1

    pair<int, int> points[10];

    pair<string, int> you;
    you = make_pair("ShuvroWritesCode", 200042159);
    cout << you.first << ' ' << you.second << '\n'; // ShuvroWritesCode 200042159

    pair<pair<int, int>, int> pair1;
    pair1 = make_pair(make_pair(26, 3), 1971);
    cout << pair1.first.first << ' ' << pair1.first.second << ' ' << pair1.second << '\n'; 

    pair<int, int> num1;
    cin >> num1.first >> num1.second;
    cout << num1.first << ' ' << num1.second << '\n';

    return 0;
}