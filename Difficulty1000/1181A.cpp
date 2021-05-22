/// Problem Name: Chunga-Changa
/// Problem Link: https://codeforces.com/problemset/problem/1181/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long

int main()
{
    lol x, y, z;
    scanf("%I64d %I64d %I64d", &x, &y, &z);
    if (x < y){
        lol tmp = x;
        x = y;
        y = tmp;
    }
    lol a = x%z;
    lol b = y%z;
    lol MAX_coconut = 0, MIN_chizhiks = 0;
    if (a+b >= z){
        if (z-a < z-b){
            MIN_chizhiks = z-a;
            x += MIN_chizhiks;
            y -= MIN_chizhiks;
        }
        else {
            MIN_chizhiks = z-b;
            y += MIN_chizhiks;
            x -= MIN_chizhiks;
        }
    }
    MAX_coconut = (x/z) + (y/z);
    printf("%I64d %I64d\n", MAX_coconut, MIN_chizhiks);
    return 0;
}
