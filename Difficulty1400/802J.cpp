/// Problem Name: Send the Fool Further! (easy)
/// Problem Link: https://codeforces.com/problemset/problem/802/J

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

class data {
private:
  int n, ans;
  vector <int> f;
  int cost[101][101];
  bool mark[101];
public:
  void dfs(int id, int mx);
  void solve();
}g[101];

void data::dfs(int id, int mx){
  if (mark[id])return;
  mark[id] = true;
  //cout << "true" << '\n';
  ans = max(ans, mx);
  for (int i = 0;i < g[id].f.size();i++){
    int nxt = g[id].f[i];
    dfs(nxt, mx+cost[id][nxt]);
  }
}

void data::solve(){
  for (int i = 0;i < 101;i++){
    for (int j = 0;j < 101;j++){
      cost[i][j] = 0;
    }
    mark[i] = false;
  }
  cin >> n;
  for (int i = 1;i < n;i++){
    int a, b, c;
    cin >> a >> b >> c;
    g[a].f.pb(b);
    g[b].f.pb(a);
    cost[a][b] = c;
    cost[b][a] = c;
  }
  ans = 0;
  dfs(0, 0);
  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  data access;
  access.solve();
  return 0;
}
