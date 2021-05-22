/// Problem Name: Duff and Meat
/// Problem Link: https://codeforces.com/problemset/problem/588/A

#include <bits/stdc++.h>

using namespace std;

bool status[100001];

int main()
{
  int n, a, b;
  vector <int> v;
  vector <pair <int, int> > p;
  scanf("%d", &n);
  for (int i = 0;i < n;i++){
    scanf("%d %d", &a, &b);
    v.push_back(a);
    p.push_back(make_pair(b, i));
  }
  sort(p.begin(), p.end());
  int ans = 0;
  int R = n;
  for (int i = 0;i < n;i++){
    int sum = 0;
    if (!status[p[i].second]){
      for (int j = p[i].second;j < R;j++){
        sum += v[j];
        status[j] = true;
      }
      R = p[i].second;
    }
    ans += sum*p[i].first;
  }
  printf("%d\n", ans);
  return 0;
}
