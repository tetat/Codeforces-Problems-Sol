/// Problem Name: Nastya Is Playing Computer Games
/// Problem Link: https://codeforces.com/problemset/problem/1136/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int r1 = 0, r2 = 0;
    for (int i = k;i >= 1;i--){
        r1+=3;
    }
    for (int i = 1;i <= n;i++){
        if (i <= k)r1++;
        else r1+=3;
    }
    for (int i = k;i <= n;i++){
        r2+=3;
    }
    for (int i = n;i >= 1;i--){
        if (i >= k)r2++;
        else r2+=3;
    }
    printf("%d\n", (r1<r2?r1:r2)-1);
    return 0;
}
