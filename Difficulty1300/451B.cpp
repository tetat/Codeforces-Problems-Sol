/// Problem Name: Sort the Array
/// Problem Link: https://codeforces.com/problemset/problem/451/B

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    vector <int> seg;
    a[n] = INT_MAX;
    for (int i = 0;i < n;i++){
        if (a[i] >= a[i+1]){
            seg.push_back(i);
            while (a[i] >= a[i+1] && i < n)i++;
            seg.push_back(i);
        }
    }
    int len = seg.size();
    if (len==0)return printf("yes\n1 1\n"), 0;
    if (len > 2)return puts("no"), 0;
    sort(a+seg[0], a+seg[1]+1);
    for (int i = 0;i < n;i++){
        if (a[i] > a[i+1])return puts("no"), 0;
    }
    printf("yes\n%d %d", ++seg[0], ++seg[1]);
    return 0;
}
