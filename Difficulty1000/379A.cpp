/// Problem Name: New Year Candles
/// Problem Link: https://codeforces.com/problemset/problem/379/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int ans = n;
  int i = 1;
  while (true){
    int cnt = 0;
    for ( ;i <= ans;i++){
      if (i%m==0)cnt++;
    }
    ans += cnt;
    if (ans <= i)break;
  }
  if (ans%m==0)ans++;
  printf("%d\n", ans);
  return 0;
}
