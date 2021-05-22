/// Problem Name: Buying a TV Set
/// Problem Link: https://codeforces.com/problemset/problem/1041/B

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long int
#define debug 0
lol f_gcd(lol a, lol b)
{
    if (a < b){
        lol t = a;
        a = b;
        b = t;
    }
    lol t;
    while (b){
        t = a % b;
        a = b;
        b = t;
    }
    if (debug)printf("%lld\n", a);
    return a;
}
int main()
{
    lol a, b, x, y;
    cin >> a >> b >> x >> y;
    lol tmp = f_gcd(x,y);
    x /= tmp;
    y /= tmp;
    lol res = (a/x)<(b/y)?a/x:b/y;
    cout << res << endl;
    return 0;
}
