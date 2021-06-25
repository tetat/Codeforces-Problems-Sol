/// Problem Name: Rumor
/// Problem Link: https://codeforces.com/problemset/problem/893/C

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

const int N = 1e5;

vector <int> g[N];
vector <int> v;
bool mark[N];
int mn;

void bfs(int src){
  queue <int> q;
  q.push(src);
  while (!q.empty()){
    int u = q.front();
    q.pop();
    mark[u] = true;
    mn = min(mn, v[u]);
    for (int i = 0;i < g[u].size();i++){
      if (mark[g[u][i]]==false){
        mark[g[u][i]] = true;
        q.push(g[u][i]);
      }
    }
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  for (int i = 0;i < m;i++){
    int a, b;
    cin >> a >> b;
    a--;b--;
    g[a].pb(b);
    g[b].pb(a);
  }
  Long ans = 0;
  for (int i = 0;i < n;i++){
    if (g[i].size()){
      if (mark[i]==false){
        mn = INT_MAX;
        bfs(i);
        ans += mn;
      }
    }else ans += v[i];
  }
  cout << ans << '\n';
  return 0;
}
