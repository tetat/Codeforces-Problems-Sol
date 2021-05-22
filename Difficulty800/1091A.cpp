/// Problem Name: New Year and the Christmas Ornament
/// Problem Link: https://codeforces.com/problemset/problem/1091/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res = min(b,min(a+1,c-1));
    printf("%d\n", res*3);
    return 0;
}
