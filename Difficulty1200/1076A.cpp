/// Problem Name: Minimizing the String
/// Problem Link: https://codeforces.com/problemset/problem/1076/A

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    string s;cin >> s;
    int po = 0;
    for (int i = 0;i < n;i++){
        if (s[i-1]>s[i]){po=i-1;break;}
        if (i==n-1)po=n-1;
    }
    s.erase(s.begin()+po);
    return cout << s << endl, 0;
}
