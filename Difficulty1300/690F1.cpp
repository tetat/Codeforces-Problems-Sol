/// Problem Name: Tree of Life (easy)
/// Problem Link: https://codeforces.com/problemset/problem/690/F1

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

const int N = 1e4;

vector <int> g[N+1];
map <int, int> m;
int ans;

void dfs(int idx, int cnt){
  if (m[idx])return;
  m[idx]++;
  if (cnt==2){
    ans++;
    return;
  }
  for (int i = 0;i < g[idx].size();i++){
    if (m[g[idx][i]]==0)dfs(g[idx][i], cnt+1);
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, a, b;
  cin >> n;
  for (int i = 1;i < n;i++){
    cin >> a >> b;
    g[a].pb(b);
    g[b].pb(a);
  }
  for (int i = 1;i <= n;i++){
    dfs(i, 0);
    m.clear();
  }
  cout << ans/2 << '\n';
  return 0;
}
