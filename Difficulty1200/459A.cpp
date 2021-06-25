/// Problem Name: Pashmak and Garden
/// Problem Link: https://codeforces.com/problemset/problem/459/A

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int ab(int n){
    return n<0?-1*n:n;
}
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    bool valid = true;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (x1 == x2){
        if (y1 > y2)swap(y1, y2);
        int d = y2-y1;
        if (x1+d <= 1000){
            x3 = x4 = x1+d;
            y3 = y1;
            y4 = y2;
        }
        else if (x1-d >= -1000){
            x3 = x4 = x1-d;
            y3 = y1;
            y4 = y2;
        }
        else valid = false;
    }
    else if (y1 == y2){
        if (x1 > x2)swap(x1, x2);
        int d = x2-x1;
        if (y1+d <= 1000){
            y3 = y4 = y1+d;
            x3 = x1;
            x4 = x2;
        }
        else if (y1-d >= -1000){
            y2 = y4 = y1-d;
            x3 = x1;
            x4 = x2;
        }
        else valid = false;
    }
    else {
        if (x1 > x2){
            swap(x1, x2);
            swap(y1, y2);
        }
        if (x2-x1 != ab(y2-y1))valid = false;
        else {
            x3 = x1;
            x4 = x2;
            y3 = y2;
            y4 = y1;
        }
    }
    valid?printf("%d %d %d %d\n", x3, y3, x4, y4):puts("-1");
    return 0;
}
