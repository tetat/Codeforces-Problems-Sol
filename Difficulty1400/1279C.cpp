/// Problem Name: Stack of Presents
/// Problem Link: https://codeforces.com/problemset/problem/1279/C

#include <bits/stdc++.h>

using namespace std;

//const int len = 1e5;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int n, m, el;
    long long ans = 0, have = 0;
    scanf("%d %d", &n, &m);
    stack <int> S;
    vector <int> v, ar;
    vector <int> take(n+1, 0);
    for (int i = 0;i < n;i++){
      scanf("%d", &el);
      ar.push_back(el);
    }
    for (int i = n-1;i >= 0;i--)S.push(ar[i]);
    for (int i = 0;i < m;i++){
      scanf("%d", &el);
      v.push_back(el);
    }
    for (int i = 0;i < m; ){
      if (!S.empty() && S.top() != v[i]){
        while (!S.empty() && S.top() != v[i]){
          take[S.top()]++;
          S.pop();
          have++;
        }
//        if (!S.empty()){
//          take[S.top()]++;
//          S.pop();
//        }
      }
      else {
        //printf("%d ", ans);
        if (!S.empty())S.pop();
        ans += have*2+1;
        i++;
        while (i < m && take[v[i]]){
          take[v[i]]--;
          have--;
          ans++;
          i++;
        }
      }
    }
//    for (int i = 1;i <= n;i++){
//      if (take[i])ans++;
//    }
    printf("%lld\n", ans);
  }
  return 0;
}
