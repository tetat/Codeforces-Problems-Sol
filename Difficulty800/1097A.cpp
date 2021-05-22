/// Problem Name: Gennady and a Card Game
/// Problem Link: https://codeforces.com/problemset/problem/1097/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s, one, two, three, four, five;
    cin >> s >> one >> two >> three >> four >> five;
    bool res = false;
    if (s[0]==one[0])res = true;
    if (s[0]==two[0])res = true;
    if (s[0]==three[0])res = true;
    if (s[0]==four[0])res = true;
    if (s[0]==five[0])res = true;
    if (s[1]==one[1])res = true;
    if (s[1]==two[1])res = true;
    if (s[1]==three[1])res = true;
    if (s[1]==four[1])res = true;
    if (s[1]==five[1])res = true;

    if (res)puts("YES");
    else puts("NO");
    return 0;
}
