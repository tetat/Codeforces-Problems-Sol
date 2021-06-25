/// Problem Name: Reach Median
/// Problem Link: https://codeforces.com/problemset/problem/1037/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int n, s, el;
  cin >> n >> s;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  Long ans = 0;
  int d = n/2;
  Long zero = 0;
  for (int i = 0;i < n;i++){
    if (i < d)ans += max(zero, Long(v[i]-s));
    else if (i > d)ans += max(zero, Long(s-v[i]));
    else ans += abs(v[i]-s);
  }
  cout << ans << '\n';
  return 0;
}
