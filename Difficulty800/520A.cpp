/// Problem Name: Pangram
/// Problem Link: https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <cstdio>
using namespace std;

int test[55];
int main()
{
    int n;scanf("%d", &n);
    string s;cin >> s;
    for (int i = 0;i < n;i++){
        if (s[i]>=65 && s[i]<=90)test[s[i]-64]++;
        else test[s[i]-96+26]++;
    }
    for (int i = 1;i <= 26;i++){
        if (test[i] < 1 && test[i+26] < 1)return puts("NO"), 0;
    }
    return puts("YES"), 0;
}
