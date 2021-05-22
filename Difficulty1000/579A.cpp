/// Problem Name: Raising Bacteria
/// Problem Link: https://codeforces.com/problemset/problem/579/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, res = 0;scanf("%d", &n);
    while (n){
        if (n&1)res++;
        n>>=1;
    }
    printf("%d\n", res);
    return 0;
}
