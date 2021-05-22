/// Problem Name: Repeating Cipher
/// Problem Link: https://codeforces.com/problemset/problem/1095/A

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int n;scanf("%d", &n);getchar();
    string s;cin >> s;
    int sub = 0, i = 0;
    while (i < n){
        cout << s[i];
        sub++;i += sub;
    }
    return puts(""), 0;
}
