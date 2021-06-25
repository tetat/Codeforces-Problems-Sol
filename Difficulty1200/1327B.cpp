/// Problem Name: Princesses and Princes
/// Problem Link: https://codeforces.com/problemset/problem/1327/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k, el;
    cin >> n;
    vector <int> mark(n+1, 0);
    vector <int> v[n];
    vector <int> LEN;
    for (int i = 0;i < n;i++){
      cin >> k;
      for (int j = 0;j < k;j++){
        cin >> el;
        v[i].pb(el);
      }
      LEN.pb(k);
      if (k)sort(v[i].begin(), v[i].end());
    }
    vector <pair <int, int> > a;
    for (int i = 0;i < n;i++){
      bool found = false;
      for (int j = 0;j < LEN[i];j++){
        if (mark[v[i][j]]==0){
          mark[v[i][j]] = 1;
          found = true;
          break;
        }
      }
      if (found)continue;
      a.pb(mp(i+1, 0));
    }
    int len = 0;
    for (int i = 1;i <= n;i++){
      if (mark[i]==0){
        a[len].second = i;
        len++;
      }
    }
    if (a.size()){
      cout << "IMPROVE" << '\n';
      int len = a.size();
      for (int i = 0;i < 1;i++){
        cout << a[i].first << ' ' << a[i].second << '\n';
      }
    }else cout << "OPTIMAL" << '\n';
  }
  return 0;
}
