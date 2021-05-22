/// Problem Name: Party
/// Problem Link: https://codeforces.com/problemset/problem/115/A

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

vector <vector <int> > g(N+1);
bool mark[N+1];
int cnt;
int ans = 1;

void dfs(int sr, int cnt){
  ans = max(ans, cnt);
  for (int i = 0;i < g[sr].size();i++){
    dfs(g[sr][i], cnt+1);
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> a;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el==-1)a.pb(i+1);
    else g[el].pb(i+1);
  }
  for (int i = 1;i < n+1;i++){
    dfs(i, 1);
  }
  cout << ans << '\n';
  return 0;
}
