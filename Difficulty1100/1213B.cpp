/// Problem Name: Bad Prices
/// Problem Link: https://codeforces.com/problemset/problem/1213/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  while (t--){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0;i < n;i++){
      scanf("%d", a+i);
    }
    int mx = INT_MAX;
    int ans = 0;
    for (int i = n-1;i >= 0;i--){
      if (mx >= a[i])mx = a[i];
      else ans++;
    }
    printf("%d\n", ans);
  }
  return 0;
}
