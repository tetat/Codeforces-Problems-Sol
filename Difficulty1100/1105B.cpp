/// Problem Name: Zuhair and Strings
/// Problem Link: https://codeforces.com/problemset/problem/1105/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k, r = 0;string s;
    cin >> n >> k >> s;
    for (int i = 97;i <= 122;i++){
        int t = 0, cnt = 0;
        for (int j = 0;j < n;j++){
            if (s[j]==i)t++;
            else t = 0;
            if (t==k)cnt++, t = 0;
        }
        if (cnt > r)r = cnt;
    }
    cout << r << endl;
    return 0;
}
