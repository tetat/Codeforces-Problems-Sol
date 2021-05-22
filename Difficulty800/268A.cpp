/// Problem Name: Games
/// Problem Link: https://codeforces.com/problemset/problem/268/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, h, a;
  vector <pair <int, int> > v;
  scanf("%d", &n);
  for (int i = 0;i < n;i++){
    scanf("%d %d", &h, &a);
    v.push_back(make_pair(h, a));
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (i!=j){
        if (v[i].second == v[j].first)ans++;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
