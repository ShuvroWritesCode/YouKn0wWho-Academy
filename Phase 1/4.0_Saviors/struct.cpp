/*
 * @Author: ShuvroWritesCode
 * @Date:   2023-09-26 11:39:42

*/

#include<bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    string name;
};

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    Point point;
    point.x = 10, point.y = 20;
    point.name = "Mr. Robot";
    cout << point.x << ' ' << point.y << '\n';
    cout << point.name << '\n';
    return 0;
}
