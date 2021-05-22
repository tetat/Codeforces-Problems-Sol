/// Problem Name: Vanya and Cubes
/// Problem Link: https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long ans = 0;
  long long sum = 0;
  long long L = 1;
  while (sum <= n){
    sum += (L*(L+1))/2;
    //printf("%lld\n", sum);
    L++;
    ans++;
  }
  cout << ans-1 << '\n';
  return 0;
}
