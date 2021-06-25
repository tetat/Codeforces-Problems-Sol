/// Problem Name: Reposts
/// Problem Link: https://codeforces.com/problemset/problem/522/A

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

const int len = 1000;
vector <vector <int> > g(len+1);
bool mark[len+1];
int ans;

void dfs(int id, int cnt){
  if (g[id].size()==1 && id!=1){
    ans = max(ans, cnt);
    return;
  }
  for (int i = 0;i < g[id].size();i++){
    if (mark[g[id][i]]==false){
      mark[g[id][i]] = true;
      dfs(g[id][i], cnt+1);
    }
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  //vector <pair <string, string> > v(n);
  map <string, int> m;
  int it = 1;
  /// POLYCARP
  m["POLYCARP"] = it;
  //it++;
  string a, b, c;
  for (int i = 0;i < n;i++){
    cin >> a >> b >> c;
    for (int j = 0;j < a.size();j++){
      if (a[j] >= 97)a[j] -= 32;
    }
    for (int j = 0;j < c.size();j++){
      if (c[j] >= 97)c[j] -= 32;
    }
//    if (!m[a]){
//      m[a] = it;
//      it++;
//    }
//    if (!m[c]){
//      m[c] = it;
//      it++;
//    }
//    g[m[a]].pb(m[c]);
//    g[m[c]].pb(m[a]);
      it = m[c]+1;
      ans = max(ans, it);
      m[a] = it;
  }
  //dfs(1, 1);
  cout << ans << '\n';
  return 0;
}
