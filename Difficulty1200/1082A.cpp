/// Problem Name: Vasya and Book
/// Problem Link: https://codeforces.com/problemset/problem/1082/A

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        int n, x, y, d;
        scanf("%d %d %d %d", &n, &x, &y, &d);
        if (!(abs(x-y)%d))printf("%d\n", abs(x-y)/d);
        else {
            int res = -1;
            if (!((y-1)%d))res = ((x-1)/d+1) + (y-1)/d;
            if (!((n-y)%d)){
                if (res>-1)res = min(res, ((n-x)/d+1) + (n-y)/d);
                else res = ((n-x)/d+1) + (n-y)/d;
            }
            printf("%d\n", res);
        }
    }
    return 0;
}
