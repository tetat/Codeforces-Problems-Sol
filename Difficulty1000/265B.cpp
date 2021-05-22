/// Problem Name: Roadside Trees (Simplified Edition)
/// Problem Link: https://codeforces.com/problemset/problem/265/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int ans = 0;
  int cur = 0;
  int prev = 0;
  for (int i = 0;i < n;i++){
    ans += v[i]-cur;
    ans++;
    cur = v[i];
    if (i < n-1){
      if (cur > v[i+1]){
        ans += cur - v[i+1];
        cur = v[i+1];
      }
      ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
