/// Problem Name: Heist
/// Problem Link: https://codeforces.com/problemset/problem/1041/A

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define debug 0

int main()
{
    int n;scanf("%d", &n);
    int ara[n];
    int mi = 1000000000;
    for (int i = 0;i < n;i++){
        scanf("%d", &ara[i]);
        if (mi > ara[i])mi = ara[i];
    }if (debug)printf("%d\n", mi);
    sort(ara, ara+n);
    int res = 0;mi++;
    for (int i = 1;i < n;i++){
        while (mi!=ara[i])mi++,res++;
        mi++;
    }
    printf("%d\n", res);
    return 0;
}
