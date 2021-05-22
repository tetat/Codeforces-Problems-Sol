/// Problem Name: Sasha and His Trip
/// Problem Link: https://codeforces.com/problemset/problem/1113/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, v;
    scanf("%d %d", &n, &v);
    int m = 0, c = 1;
    c += v;m = v;
    for (int i = 2;i <= n && c < n;i++){
        m += i;c++;
    }
    printf("%d\n", v>=n?n-1:m);
    return 0;
}
