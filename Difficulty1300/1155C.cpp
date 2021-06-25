/// Problem Name: Alarm Clocks Everywhere
/// Problem Link: https://codeforces.com/problemset/problem/1155/C

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector <long long> v;
    long long x[n+1], p[m+1];
    for (int i = 0;i < n;i++){
        scanf("%I64d", &x[i]);
    }
    for (int i = 0;i < m;i++){
        scanf("%I64d", &p[i]);
    }
    for (int i = 1;i < n;i++){
        v.push_back(x[i]-x[i-1]);
    }
    long long gc = v[0];
    int len = v.size();
    for (int i = 1;i < len;i++){
        gc = __gcd(gc, v[i]);
    }
//    cout << gc << endl;
    for (int i = 0;i < m;i++){
        if (gc%p[i] == 0)return !printf("YES\n%I64d %d\n", x[0], i+1);
    }
    return puts("NO"), 0;
}
