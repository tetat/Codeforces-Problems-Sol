/// Problem Name: Sereja and Suffixes
/// Problem Link: https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>

using namespace std;

int n, q, el;
bool status[100001];
vector <pair <int, int> > v;

int main()
{
  scanf("%d %d", &n, &q);
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    v.push_back(make_pair(el, 0));
  }
  int cnt = 0;
  for (int i = n-1;i >= 0;i--){
    if (!status[v[i].first]){
      cnt++;
      status[v[i].first] = true;
    }
    v[i].second = cnt;
  }
  while (q--){
    scanf("%d", &el);
    printf("%d\n", v[el-1].second);
  }
  return 0;
}
