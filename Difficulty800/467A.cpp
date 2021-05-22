/// Problem Name: George and Accommodation
/// Problem Link: https://codeforces.com/problemset/problem/467/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int p, q, res = 0;
    for (int i = 0;i < n;i++){
        scanf("%d %d", &p, &q);
        if (p < q-1)res++;
    }
    printf("%d\n", res);
    return 0;
}
