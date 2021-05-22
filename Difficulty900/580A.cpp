/// Problem Name: Kefa and First Steps
/// Problem Link: https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int ar[n];
  for (int i = 0;i < n;i++){
    scanf("%d", &ar[i]);
  }
  int ans = 0;
  int cnt = 1;
  for (int i = 1;i < n;i++){
    if (ar[i-1] <= ar[i])cnt++;
    else {
      ans = max(ans, cnt);
      cnt = 1;
    }
  }
  ans = max(ans, cnt);
  printf("%d\n", ans);
  return 0;
}
