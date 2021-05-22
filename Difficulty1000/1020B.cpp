/// Problem Name: Badge
/// Problem Link: https://codeforces.com/problemset/problem/1020/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e3;
vector <int> mark(N+1, 0);
vector <int> v(N+1);
int c;

void dfs(int idx){
  if (mark[idx] == 2){
    c = idx;return;
  }
  mark[idx]++;
  dfs(v[idx]);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  for (int i = 1;i <= n;i++){
    cin >> v[i];
  }
  vector <int> ans;
  for (int i = 1;i <= n;i++){
    dfs(i);
    ans.pb(c);
    for (int i = 1;i <= n;i++){
      mark[i] = 0;
    }
  }
  for (int i = 0;i < n;i++){
    cout << ans[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
