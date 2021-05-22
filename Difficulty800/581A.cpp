/// Problem Name: Vasya the Hipster
/// Problem Link: https://codeforces.com/problemset/problem/581/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b){
        int temp=a;a=b;b=temp;
    }
    printf("%d %d\n", b, (a-b)/2);
    return 0;
}
