/// Problem Name: Reverse a Substring
/// Problem Link: https://codeforces.com/problemset/problem/1155/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    string s;cin >> s;
    s+='z';
    for (int i = 0;i < n;i++){
        if (s[i] > s[i+1])return !printf("YES\n%d %d\n", i+1, i+2);
    }
    return puts("NO"), 0;
}
