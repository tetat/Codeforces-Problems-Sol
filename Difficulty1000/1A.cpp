/// Problem Name: Theatre Square
/// Problem Link: https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, m, x, te;
    scanf("%d %d %d", &n, &m, &x);
    te = x;
    if (n < m){
        int test = n;
        n = m;
        m = test;
    }
    int s1 = 1, s2 = 1;
    while (te < n){
        s1++;
        if (te < m)s2++;
        te += x;
    }
    printf("%I64d\n", (long long int)s1 * (long long int)s2);
    return 0;
}
