/// Problem Name: Nauuo and Votes
/// Problem Link: https://codeforces.com/problemset/problem/1173/A

#include <iostream>
#include <cstdio>
using namespace std;

int ab(int n){
    return n<0?-1*n:n;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (ab(x-y) <= z && z)puts("?");
    else {
        if (x>y)puts("+");
        else if (x<y)puts("-");
        else puts("0");
    }
    return 0;
}
