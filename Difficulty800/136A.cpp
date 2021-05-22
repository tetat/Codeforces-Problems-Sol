/// Problem Name: Presents
/// Problem Link: https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, el;
  scanf("%d", &n);
  vector <pair <int, int> > v;
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    v.push_back(make_pair(el, i+1));
  }
  sort(v.begin(), v.end());
  for (int i = 0;i < n;i++){
    printf("%d", v[i].second);
    if (i != n-1)printf(" ");
  }puts("");
  return 0;
}
