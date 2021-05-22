/// Problem Name: Game 23
/// Problem Link: https://codeforces.com/problemset/problem/1141/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (m%n)return puts("-1"), 0;
    int cnt = m/n;
    if (cnt==1)return puts("0"), 0;
    int res = 0;
    while (cnt > 1){
        if (cnt%2 == 0){
            res++;
            cnt/=2;
        }
        else if (cnt%3 == 0){
            res++;
            cnt/=3;
        }
        else {
            return puts("-1"), 0;
        }
    }
    printf("%d\n", res);
    return 0;
}
