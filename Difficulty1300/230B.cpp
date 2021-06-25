/// Problem Name: T-primes
/// Problem Link: https://codeforces.com/problemset/problem/230/B

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define lol long long
const int MAX = 1e6;
bool prime[MAX];

void sieve(){
    int sq = sqrt(MAX);
    prime[1] = 1;
    for (int i = 4;i <= MAX;i+=2)prime[i] = 1;
    for (int i = 3;i <= sq;i+=2){
        if (!prime[i]){
            for (int j = i*i;j <= MAX;j+=i)prime[j] = 1;
        }
    }
}
int main()
{
    sieve();
    int t;scanf("%d", &t);
    while (t--){
        lol num;scanf("%I64d", &num);
        lol tmp = sqrt(num);
        if ((tmp*tmp)==num && !prime[tmp] && num!=1)puts("YES");
        else puts("NO");
    }
    return 0;
}
