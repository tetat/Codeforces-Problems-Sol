/// Problem Name: Holiday Of Equality
/// Problem Link: https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int ar[n];
  int mx = 0;
  int ans = 0;
  for (int i = 0;i < n;i++){
    scanf("%d", &ar[i]);
    mx = max(mx, ar[i]);
  }
  for (int i = 0;i < n;i++){
    ans += mx-ar[i];
  }
  printf("%d\n", ans);
  return 0;
}
