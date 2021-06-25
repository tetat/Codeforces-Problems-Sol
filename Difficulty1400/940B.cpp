/// Problem Name: Our Tanya is Crying Out Loud
/// Problem Link: https://codeforces.com/problemset/problem/940/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

map <Long, Long> m;
Long n, k, A, B;

Long solve(Long n){
  if (n < 2)return 0;
  if (m[n])return m[n];
  if (n%k){
    if (n < k)return m[n] = solve(1) + (A * (n-1));
    else return m[n] = solve(n - (n%k)) + (A * (n%k));
  }else {
    m[n] = solve(n/k) + B;
    m[n] = min(m[n], solve(n/k) + (A * (n - (n/k))));
    return m[n];
  }
  //return m[n];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  //Long n, k, A, B;
  cin >> n >> k >> A >> B;
  Long ans = 0;
  if (k==1)ans = A * (n-1);
  else ans = solve(n);
  cout << ans << '\n';
  return 0;
}
