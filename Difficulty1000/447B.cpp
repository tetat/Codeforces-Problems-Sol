/// Problem Name: DZY Loves Strings
/// Problem Link: https://codeforces.com/problemset/problem/447/B

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
  string s;
  int n, k, el;
  cin >> s >> k;
//  n = s.size();
  vector <int> v;
  int mx = 0;
  int po = 0;
  for (int i = 0;i < 26;i++){
    cin >> el;
    if (mx < el){
      mx = el;
      po = i;
    }
    v.pb(el);
  }
  for (int i = 0;i < k;i++){
    s += (po+97);
  }
  n = s.size();
  int ans = 0;
  for (int i = 0;i < n;i++){
    ans += (i+1) * v[s[i]-97];
  }
  cout << ans << '\n';
  return 0;
}
