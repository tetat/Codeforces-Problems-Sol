/// Problem Name: Divisor Subtraction
/// Problem Link: https://codeforces.com/problemset/problem/1076/B

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
#define lol long long int
lol N = 1e5 + 10;
lol prime[30000];
bool mark[100010];
lol primelen;
void sieve()
{
    lol limit = sqrt(N*1.0)+2;
    for (lol i = 4;i <= N;i+=2)mark[i] = 1;
    prime[primelen++]=2;
    for (lol i = 3;i <= N;i+=2){
        if (!mark[i]){
            prime[primelen++]=i;
            if (i <= limit){
                for (lol j = i*i;j <= N;j += i)mark[j]=1;
            }
        }
    }
}
bool isprime(lol n)
{
    if (n<2)return false;
    if (!(n%2) && n!=2)return false;
    lol limit = sqrt(n*1.0)+2;
    for (lol i = 2;i <= limit;i++){
        if (!(n%i))return false;
    }
    return true;
}
int main()
{
    sieve();
    lol n;lol res = 0;
    cin >> n;

    while (n){
        if (isprime(n)){res++;break;} // if n is prime

        if (!(n%2)){res+=n/2;break;} // if n is even

        for (lol i = 0;i < primelen;i++){ // if n is composite
            if (!(n%prime[i])){
                n -= prime[i];
                res++;break;
            }
        }
    }
    cout << res << endl;
    return 0;
}
