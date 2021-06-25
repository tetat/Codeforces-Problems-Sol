/// Problem Name: Taxi
/// Problem Link: https://codeforces.com/problemset/problem/158/B

#include <iostream>
#include <cstdio>
using namespace std;

int n, num, s[5], res;
int main()
{
    scanf("%d", &n);
    for (int i = 0;i < n;i++){
        scanf("%d", &num);s[num]++;
    }
    if (s[1] <= s[3])res += s[3], s[1] = 0;
    else res += s[3], s[1] -= s[3];
    s[1] += s[2]*2;
    (s[1]%4)?res += s[1]/4+1:res += s[1]/4;
    res += s[4];
    printf("%d\n", res);
    return 0;
}
 
