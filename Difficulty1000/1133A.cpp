/// Problem Name: Middle of the Contest
/// Problem Link: https://codeforces.com/problemset/problem/1133/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    int res = ((h2*60+m2)-(h1*60+m1))/2;
    res += (h1*60+m1);
    printf("%02d:%02d\n", res/60, res%60);
    return 0;
}
