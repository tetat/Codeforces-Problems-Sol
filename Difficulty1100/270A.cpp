/// Problem Name: Fancy Fence
/// Problem Link: https://codeforces.com/problemset/problem/270/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        int a;scanf("%d", &a);
        if (360 % (a!=180?180-a:1))puts("NO");
        else puts("YES");
    }
    return 0;
}
