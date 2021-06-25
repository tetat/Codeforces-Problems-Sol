/// Problem Name: Summer sell-off
/// Problem Link: https://codeforces.com/problemset/problem/810/B

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
  int n, f;
  cin >> n >> f;
  vector <int> v;
  int a, b;
  Long ans = 0;
  for (int i = 0;i < n;i++){
    cin >> a >> b;
    if (a && a < b){
      if (a+a <= b)v.pb(a);
      else v.pb(b-a);
    }
    ans += min(a, b);
  }
  sort(v.begin(), v.end(), greater<int>());
  int len = v.size();
  len = min(f, len);
  for (int i = 0;i < len;i++){
    ans += v[i];
  }
  cout << ans << '\n';
  return 0;
}
