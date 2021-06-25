/// Problem Name: Ehab and a 2-operation task
/// Problem Link: https://codeforces.com/problemset/problem/1088/C

#include <iostream>
#include <cstdio>
using namespace std;
#define x 100000
int main()
{
    int n;scanf("%d", &n);
    int a[n];
    for (int i = 0;i < n;i++)
        scanf("%d", a+i);
    bool test = true;
    for (int i = 1;i < n;i++){
        if (a[i-1] >= a[i]){
            test = false;break;
        }
    }
    if (test)puts("0");
    else {
        printf("%d\n", n+1);
        printf("1 %d %d\n", n, x);
        for (int i = 0;i < n;i++){
            printf("2 %d %d\n", i+1, a[i]+x-i);
        }
    }
    return 0;
}
