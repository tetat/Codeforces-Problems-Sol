/// Problem Name: Browser
/// Problem Link: https://codeforces.com/problemset/problem/915/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, p, l, r;
  cin >> n >> p >> l >> r;
  int ans = 0;
  if (1 < l || r < n){
    if (p < l){
      ans += l-p;
      p = l;
    }else if (p > r){
      ans += p-r;
      p = r;
    }
    if (l==1)ans += (r-p)+1;
    else if (r==n)ans += (p-l)+1;
    else {
      if (p-l < r-p){
        ans += (p-l)+1;
        ans += (r-l)+1;
      }else {
        ans += (r-p)+1;
        ans += (r-l)+1;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
