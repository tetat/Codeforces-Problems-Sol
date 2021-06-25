/// Problem Name: Game with Telephone Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1155/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    string s;cin >> s;
    int sub_len = s.size() - 11;
    int eight = 0;
    for (int i = 0;i <= sub_len;i++){
        if (s[i] == '8')eight++;
    }
    (sub_len/2)<eight?puts("YES"):puts("NO");
    return 0;
}
