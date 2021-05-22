/// Problem Name: Dragons
/// Problem Link: https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int S, n, x, y;
  vector <pair <int, int> > v;
  scanf("%d %d", &S, &n);
  for (int i = 0;i < n;i++){
    scanf("%d %d", &x, &y);
    v.push_back(make_pair(x, y));
  }
  //sort(v.begin(), v.end());
  bool ans = true;
  for (int i = 0;i < n;i++){
    int mx = -1;
    int po = -1;
    for (int j = 0;j < n;j++){
      if (v[j].first < S){
        if (mx < v[j].second){
          po = j;
          mx = v[j].second;
        }
      }
    }
    if (po >= 0){
      v[po].first = 10001;
      v[po].second = -1;
      S += mx;
    }
    else {
      ans = false;
      break;
    }
  }
  ans?puts("YES"):puts("NO");
  return 0;
}
