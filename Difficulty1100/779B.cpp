/// Problem Name: Weird Rounding
/// Problem Link: https://codeforces.com/problemset/problem/779/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

Long Pow(Long n, Long k){
  while (k--)n *= 10;
  return n;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, k;
  cin >> n >> k;
  Long m = Pow(Long(1), k);
  int d = 0;
  int zero = 0;
  Long tm = n;
  while (tm>9 && zero!=k){
    if (tm%10)d++;
    else zero++;
    tm /= 10;
  }
  while (zero--){
    tm = (tm*10);
  }
  int ans = 0;
  //cout << tm << ' ' << m << '\n';
  if (tm%m==0)ans = d;
  else {
    while (n){
      n /= 10;
      ans++;
    }ans--;
  }
  cout << ans << '\n';
  return 0;
}
