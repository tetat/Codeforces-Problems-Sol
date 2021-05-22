/// Problem Name: Cover Points
/// Problem Link: https://codeforces.com/problemset/problem/1047/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, a, b, ma = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0;i < n;i++){
        scanf("%d %d", &a, &b);ar[i] = a+b;
        if (ma < ar[i])ma = ar[i];
    }
    printf("%d\n", ma);
}
