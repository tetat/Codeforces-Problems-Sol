/// Problem Name: News Distribution
/// Problem Link: https://codeforces.com/problemset/problem/1167/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

vector <vector <int> > g(N*5+1);
vector <int> ad;
bool mark[N*5+1];
int cnt;

void dfs(int id){
  if (mark[id])return;
  mark[id] = true;
  ad.pb(id);
  cnt++;
  for (int i = 0;i < g[id].size();i++){
    dfs(g[id][i]);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  for (int i = 0;i < m;i++){
    int k;cin >> k;
    if (k){
      int prev;cin >> prev;
      for (int j = 1;j < k;j++){
        int nxt;cin >> nxt;
        g[prev].pb(nxt);
        g[nxt].pb(prev);
      }
    }
  }
//  for (int i = 0;i < g[2].size();i++){
//    cout << g[2][i] << ' ';
//  }cout << '\n';
  vector <int> ans(n+1);
  for (int i = 1;i <= n;i++){
    if (!mark[i]){
      cnt = 0;
      if (ad.size())ad.clear();
      dfs(i);
      for (int j = 0;j < ad.size();j++){
        //cout << ad[j] << ' ';
        ans[ad[j]] = cnt;
      }//cout << '\n';
    }
  }
  for (int i = 1;i <= n;i++){
    cout << ans[i] << ' ';
  }cout << '\n';
  return 0;
}
