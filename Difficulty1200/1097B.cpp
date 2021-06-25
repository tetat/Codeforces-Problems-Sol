/// Problem Name: Petr and a Combination Lock
/// Problem Link: https://codeforces.com/problemset/problem/1097/B

// tourist

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    int p = 1<<n;
    for (int i = 0;i < p;i++){
        int ths = 0;
        for (int j = 0;j < n;j++){
            if ((i & (1<<j)))ths += a[j];
            else ths -= a[j];;
        }
        if (!(ths%360))return puts("YES"), 0;
    }
    puts("NO");
    return 0;
}
