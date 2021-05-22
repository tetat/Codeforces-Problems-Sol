/// Problem Name: Restoring Three Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1154/A

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 4;
    vector <int> v;
    for (int i = 0;i < n;i++){
        int in;scanf("%d", &in);
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    printf("%d %d %d\n", v[3]-v[2], v[3]-v[1], v[3]-v[0]);
    return 0;
}
