/// Problem Name: Parity
/// Problem Link: https://codeforces.com/problemset/problem/1110/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int b, k, n, odd = 0;
    scanf("%d %d", &b, &k);
    for (int i = 0;i < k;i++){
        scanf("%d", &n);
        if (n&1)odd++;
    }
    if (b&1){
        if (odd&1)puts("odd");
        else puts("even");
    }
    else {
        if (n&1)puts("odd");
        else puts("even");
    }
    return 0;
}
