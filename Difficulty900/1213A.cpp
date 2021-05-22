/// Problem Name: Chips Moving
/// Problem Link: https://codeforces.com/problemset/problem/1213/A

#include <bits/stdc++.h>

using namespace std;

int ab(int n)
{
  return n<0?-1*n:n;
}

int main()
{
  int n;
  scanf("%d", &n);
  int a[n+1];
  for (int i = 0;i < n;i++){
    scanf("%d", &a[i]);
  }
  int ans = INT_MAX;
  for (int i = 0;i < n;i++){
    int cnt = 0;
    for (int j = 0;j < n;j++){
      int d = ab(a[i]-a[j]);
      if (d%2)cnt++;
    }
    if (cnt < ans)ans = cnt;
  }
  printf("%d\n", ans);
  return 0;
}
