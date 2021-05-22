/// Problem Name: Lunar New Year and Cross Counting
/// Problem Link: https://codeforces.com/problemset/problem/1106/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    string s[n+5];
    for (int i = 0;i < n;i++){
        cin >> s[i];
    }
    int res = 0;
    for (int i = 1;i < n-1;i++){
        for (int j = 1;j < n-1;j++){
            if (s[i][j]=='X' && s[i-1][j-1]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]=='X' && s[i+1][j+1]=='X')res++;
        }
    }
    printf("%d\n", res);
    return 0;
}
