/// Problem Name: Luxurious Houses
/// Problem Link: https://codeforces.com/problemset/problem/581/B

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int r[100001];
int main()
{
    int n;scanf("%d", &n);
    int ar[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", &ar[i]);
    }
    int ma = ar[n-1];
    for (int i = n-2;i > -1;i--){
        if (ma >= ar[i])r[i] = ma-ar[i]+1;
        else ma = ar[i];
    }
    for (int i = 0;i < n;i++){
        printf("%d ", r[i]);
    }puts("");
    return 0;
}
