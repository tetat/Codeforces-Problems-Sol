/// Problem Name: MUH and Important Things
/// Problem Link: https://codeforces.com/problemset/problem/471/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int mark[2001];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <pair <int, int> > v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i].first;
    mark[v[i].first]++;
    v[i].second = i+1;
  }
  int tot = 0;
  string ans = "NO";
  for (int i = 1;i <= 2000;i++){
    if (mark[i] > 1){
      tot++;
      if (tot > 1 || mark[i] > 2){
        ans = "YES";
      }
    }
  }
  cout << ans << '\n';
  if (ans == "YES"){
    sort(v.begin(), v.end());
    vector <int> p[3];
    for (int i = 0;i < 3;i++){
      for (int j = 0;j < n;j++){
        p[i].pb(v[j].second);
      }
    }
    int change = 0;
    int i = 1;
    while (i < n){
      if (v[i].first==v[i-1].first){
        swap(p[change][i], p[change][i-1]);
        change++;
      }
      if (change==2)break;
      i++;
    }
    for (int i = 0;i < 3;i++){
      for (int j = 0;j < n;j++){
        cout << p[i][j] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
