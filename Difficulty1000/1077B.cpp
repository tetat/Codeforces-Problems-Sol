/// Problem Name: Disturbed People
/// Problem Link: https://codeforces.com/problemset/problem/1077/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n];
    for (int i = 0;i < n;i++)scanf("%d", &a[i]);
    int res = 0;
    for (int i = 1;i < n-1;i++){
        if (a[i-1] && !a[i] && a[i+1]){
            a[i+1]=0;res++;
        }
    }
    return cout << res << endl, 0;
}
