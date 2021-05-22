/// Problem Name: I Wanna Be the Guy
/// Problem Link: https://codeforces.com/problemset/problem/469/A

#include <iostream>
#include <cstdio>
using namespace std;
int ar[101];

int main()
{
    int n, t = 2;
    scanf("%d", &n);
    while (t--){
        int q, num;scanf("%d", &q);
        while (q--){
            scanf("%d", &num);
            ar[num]=1;
        }
    }
    int res = 0;
    for (int i = 1;i <= 100;i++)if (ar[i])res++;
    if (res>=n)puts("I become the guy.");
    else puts("Oh, my keyboard!");
    return 0;
}
