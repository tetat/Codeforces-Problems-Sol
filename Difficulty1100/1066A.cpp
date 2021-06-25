/// Problem Name: Vova and Train
/// Problem Link: https://codeforces.com/problemset/problem/1066/A

#include <iostream>
#include <cstdio>
using namespace std;

int t, L, v, l, r;
int main()
{
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d %d", &L, &v, &l, &r);
        //if (v==l)--l;
        //if (v==r)--r;
        printf("%d\n", (L/v - r/v) + --l/v);
    }
    return 0;
}
