/// Problem Name: Heating
/// Problem Link: https://codeforces.com/problemset/problem/1260/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    long long c, s;
    scanf("%lld %lld", &c, &s);
    if (c >= s){
      printf("%lld\n", s);
      continue;
    }
    long long store[c];
    long long d = s/c;
    for (long long i = 0;i < c;i++)store[i] = d;
    long long ov = c*d;
    long long cut = ov-s;
    long long one = -1;
    if (cut < 0){
      cut = -cut;
      one = -one;
    }
    for (long long i = 0;i < cut;i++)store[i] += one;
    long long ans = 0;
    for (long long i = 0;i < c;i++)ans += (store[i]*store[i]);
    printf("%lld\n", ans);
  }
  return 0;
}
