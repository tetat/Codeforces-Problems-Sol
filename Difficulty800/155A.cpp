/// Problem Name: I_love_%username%
/// Problem Link: https://codeforces.com/problemset/problem/155/A

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
  int mn = v[0];
  int mx = v[0];
  int ans = 0;
  for (int i = 1;i < n;i++){
    if (mn > v[i]){
      ans++;
      mn = v[i];
    }
    if (mx < v[i]){
      ans++;
      mx = v[i];
    }
  }
  printf("%d\n", ans);
  return 0;
}
