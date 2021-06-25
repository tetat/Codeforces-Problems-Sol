/// Problem Name: Ehab and a Special Coloring Problem
/// Problem Link: https://codeforces.com/problemset/problem/1174/C

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int t = 1, r[n+2] = {0};
    for (int i = 2;i <= n;i++){
        if (r[i] == 0){
            for (int j = i;j <= n;j += i){
                r[j] = t;
            }t++;
        }
    }
    for (int i = 2;i <= n;i++){
        printf("%d ", r[i]);
    }
    return 0;
}
