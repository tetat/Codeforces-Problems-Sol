/// Problem Name: Xenia and Ringroad
/// Problem Link: https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  long long n, m, h;
  long long prev = 1;
  long long ans = 0;
  cin >> n >> m;
  for (int i = 0;i < m;i++){
    cin >> h;
    if (prev > h)ans += n-(prev-h);
    else ans += h-prev;
    prev = h;
  }
  cout << ans << '\n';
  return 0;
}
