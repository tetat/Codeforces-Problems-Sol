/// Problem Name: Choosing Teams
/// Problem Link: https://codeforces.com/problemset/problem/432/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k, member = 0;;
    scanf("%d %d", &n, &k);
    for (int i = 0;i < n;i++){
        int in;scanf("%d", &in);
        if (in+k < 6)member++;
    }
    printf("%d\n", member/3);
    return 0;
}
