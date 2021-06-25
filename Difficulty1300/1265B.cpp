/// Problem Name: Beautiful Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1265/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0;i < n;i++){
      int in;
      scanf("%d", &in);
      ar[in-1] = i;
    }
    int mx = -1;
    int mn = n;
    string ans;
    for (int i = 0;i < n;i++){
      mx = max(mx, ar[i]);
      mn = min(mn, ar[i]);
      if (mx-mn == i)ans += 49;
      else ans += 48;
    }
    cout << ans << '\n';
  }
  return 0;
}
