/// Problem Name: Army
/// Problem Link: https://codeforces.com/problemset/problem/38/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int d[n+2] = {0};
    for (int i = 1;i < n;i++){
        scanf("%d", &d[i]);
    }
    int a, b;
    scanf("%d %d", &a, &b);
    int res = 0;
    while (a < b){
        res += d[a];
        a++;
    }
    printf("%d\n", res);
    return 0;
}
