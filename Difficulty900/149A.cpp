/// Problem Name: Business trip
/// Problem Link: https://codeforces.com/problemset/problem/149/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int k, el;
  scanf("%d", &k);
  vector <int> v;
  for (int i = 0;i < 12;i++){
    scanf("%d", &el);
    v.push_back(el);
  }
  sort(v.begin(), v.end());
  if (k == 0)puts("0");
  else {
    int ans = 0;
    for (int i = 11;i >= 0;i--){
      ans++;
      k -= v[i];
      if (k < 1)break;
    }
    if (k > 0)puts("-1");
    else printf("%d\n", ans);
  }
  return 0;
}
