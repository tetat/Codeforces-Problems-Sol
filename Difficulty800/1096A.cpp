/// Problem Name: Find Divisible
/// Problem Link: https://codeforces.com/problemset/problem/1096/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        lol l, r;
        scanf("%I64d %I64d", &l, &r);
        if (l*2<=r)printf("%I64d %I64d\n", l, l*2);
        else printf("%I64d %I64d\n", l, l);
    }
    return 0;
}
