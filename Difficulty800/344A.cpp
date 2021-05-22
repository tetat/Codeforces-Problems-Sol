/// Problem Name: Magnets
/// Problem Link: https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, el;
  vector <int> v;
  scanf("%d", &n);
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    v.push_back(el);
  }
  int ans = 1;
  for (int i = 1;i < n;i++){
    if (v[i-1] != v[i])ans++;
  }
  printf("%d\n", ans);
  return 0;
}
