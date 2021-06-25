/// Problem Name: PolandBall and Forest
/// Problem Link: https://codeforces.com/problemset/problem/755/C

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

bool mark[N];
vector <int> g[N];

void bfs(int idx){
  queue <int> q;
  q.push(idx);
  while (!q.empty()){
    int u = q.front();
    q.pop();
    mark[u] = true;
    for (int i = 0;i < g[u].size();i++){
      if (mark[g[u][i]] == false){
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
  int n, el;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    g[i].pb(el-1);
    g[el-1].pb(i);
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (mark[i]==false){
      ans++;
      bfs(i);
    }
  }
  cout << ans << '\n';
  return 0;
}
