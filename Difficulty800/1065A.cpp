/// Problem Name: Vasya and Chocolate
/// Problem Link: https://codeforces.com/problemset/problem/1065/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long int
int main()
{
    lol s, a, b, c;
    int t;scanf("%d", &t);
    while (t--){
        lol res = 0;
        cin >> s >> a >> b >> c;
        res += s/c;
        if (res)if (res>=a)res += (res/a)*b;
        cout << res << endl;
    }
    return 0;
}
