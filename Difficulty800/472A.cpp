/// Problem Name: Design Tutorial: Learn from Math
/// Problem Link: https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>

using namespace std;

const int len = 1e6;
bool prime[len+1];

void sieve(){
  prime[0] = prime[1] = true;
  for (int i = 4;i <= len;i += 2)prime[i] = true;
  for (long long i = 3;i*i <= len;i += 2){
    if (prime[i] == false){
      for (long long j = i*i;j <= len;j += i+i)prime[j] = true;
    }
  }
}

int main()
{
  sieve();
  int n, ff = 4;
  scanf("%d", &n);
  while (!prime[ff] || !prime[n-ff])ff++;
  printf("%d %d\n", ff, n-ff);
  return 0;
}
