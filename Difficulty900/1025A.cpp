/// Problem Name: Doggo Recoloring
/// Problem Link: https://codeforces.com/problemset/problem/1025/A

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;char s[n];
    scanf("%s", s);
    if (n==1){cout << "Yes\n";return 0;}
    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            if (i!=j)if (s[i]==s[j])return cout << "Yes" << endl, 0;
    cout << "No" << endl;
    return 0;
}
