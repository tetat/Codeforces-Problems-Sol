/// Problem Name: New Year Garland
/// Problem Link: https://codeforces.com/problemset/problem/1279/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    vector <int> v;
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    v.push_back(r);
    v.push_back(g);
    v.push_back(b);
    sort(v.begin(), v.end());
    if (v[0]+v[1]+2 <= v[2])puts("No");
    else puts("Yes");
  }
  return 0;
}
