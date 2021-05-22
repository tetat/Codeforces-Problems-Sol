/// Problem Name: Digital root
/// Problem Link: https://codeforces.com/problemset/problem/1107/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        long long k, x;scanf("%I64d %I64d", &k, &x);
        printf("%I64d\n", (--k*9)+x);
    }
    return 0;
}
