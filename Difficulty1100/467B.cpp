/// Problem Name: Fedor and New Game
/// Problem Link: https://codeforces.com/problemset/problem/467/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, k, el;
  scanf("%d %d %d", &n, &m, &k);
  vector <int> v;
  for (int i = 0;i < m+1;i++){
    scanf("%d", &el);
    v.push_back(el);
  }
  int ans = 0;
  for (int i = 0;i < m;i++){
    int mx = max(v[i], v[m]);
    int cnt = 0;
    int l = 0;
    while (mx){
      l++;
      mx /= 2;
    }
    for (int j = 0;j < l;j++){
      if ((v[i] & (1<<j)) != (v[m] & (1<<j)))cnt++;
    }
    if (cnt <= k)ans++;
  }
  printf("%d\n", ans);
  return 0;
}
