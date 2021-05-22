/// Problem Name: Puzzles
/// Problem Link: https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, el;
  vector <int> v;
  scanf("%d %d", &n, &m);
  for (int i = 0;i < m;i++){
    scanf("%d", &el);
    v.push_back(el);
  }
  sort(v.begin(), v.end());
  int L = 0;
  int R = n-1;
  int ans = INT_MAX;
  while (R < m){
    ans = min(ans, v[R]-v[L]);
    R++;
    L++;
  }
  printf("%d\n", ans);
  return 0;
}
