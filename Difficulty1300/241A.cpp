/// Problem Name: Old Peykan
/// Problem Link: https://codeforces.com/problemset/problem/241/A

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
  int n, k;
  cin >> n >> k;
  int mx = 0;
  vector <int> d(n);
  for (int i = 0;i < n;i++){
    cin >> d[i];
  }
  vector <int> s(n);
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  int ans = 0;
  int fuel = 0;
  for (int i = 0;i < n;i++){
    mx = max(mx, s[i]);
    fuel += s[i];
    if (fuel >= d[i]){
      ans += d[i];
      fuel -= d[i];
    }else {
      while (fuel < d[i]){
        fuel += mx;
        ans += k;
      }
      ans += d[i];
      fuel -= d[i];
    }
  }
  cout << ans << '\n';
  return 0;
}
