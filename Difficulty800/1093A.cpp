/// Problem Name: Dice Rolling
/// Problem Link: https://codeforces.com/problemset/problem/1093/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        int n, cnt = 0;
        scanf("%d", &n);
        for (int i = 7;i >= 2;i--){
            if (n%i != 1)cnt += n/i, n %= i;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
