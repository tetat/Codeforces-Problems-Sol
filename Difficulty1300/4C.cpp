/// Problem Name: Registration system
/// Problem Link: https://codeforces.com/problemset/problem/4/C

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map <string, int> m;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin >> n;//scanf("%d", &n);
    for (int i = 0;i < n;i++){
        string s;cin >> s;
        int tmp = ++m[s];
        tmp -= 1;
        if (tmp)cout << s << tmp << '\n';
        else cout <<"OK\n";
    }
    return 0;
}
