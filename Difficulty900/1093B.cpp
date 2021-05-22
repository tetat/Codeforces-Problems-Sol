/// Problem Name: Letters Rearranging
/// Problem Link: https://codeforces.com/problemset/problem/1093/B

//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        string s;cin >> s;
        sort(s.begin(),s.end());
        if (s[0]==s.back())puts("-1");
        else cout << s << endl;
    }
    return 0;
}
