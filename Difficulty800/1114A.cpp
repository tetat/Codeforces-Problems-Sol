/// Problem Name: Got Any Grapes?
/// Problem Link: https://codeforces.com/problemset/problem/1114/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    //int g = a;
    //int p = (a+b)-x;
    //int bl = (a+b+c)-(x+y);
    //cout << g << endl << p << endl << bl << endl;
    if (x <= a && y <= (a+b)-x && z <= (a+b+c)-(x+y))puts("YES");
    else puts("NO");
    return 0;
}
