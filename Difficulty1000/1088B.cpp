/// Problem Name: Ehab and subtraction
/// Problem Link: https://codeforces.com/problemset/problem/1088/B

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int tmp = 0;int i = 0;
    bool test = true;
    a[n] = -1;
    while (k){
        for ( ;i < n && a[i]==a[i+1];i++);
        if (i < n){
            if (k){
                printf("%d\n", a[i]-tmp);
                tmp = a[i];k--;i++;
            }
        }
        if (i < n)continue;
        if (!k)break;
        puts("0");
        k--;
    }
    return 0;
}
