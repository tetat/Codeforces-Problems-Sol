/// Problem Name: Verse For Santa
/// Problem Link: https://codeforces.com/problemset/problem/1279/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    vector <int> v;
    int n, S, el;
    scanf("%d %d", &n, &S);
    for (int i = 0;i < n;i++){
      scanf("%d", &el);
      v.push_back(el);
    }
    int ans = 0;
    int mx = 0;
    int po = 0;
    for (int i = 0;i < n;i++){
      if (S-v[i] < 0){
        if (mx < v[i]){
          po = i;
        }
        ans = po+1;
        break;
      }
      else {
        S -= v[i];
        if (v[i] > mx){
          mx = v[i];
          po = i;
        }
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
