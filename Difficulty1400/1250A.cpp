/// Problem Name: Berstagram
/// Problem Link: https://codeforces.com/problemset/problem/1250/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e6;

struct data {
  int mn;
  int mx;
  int cur;
};

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  vector <int> v(m);
  for (int i = 0;i < m;i++){
    cin >> v[i];
  }
  vector <int> p(n+1);
  data a[n+1];
  for (int i = 1;i <= n;i++){
    a[i].cur = i;
    a[i].mn = i;
    a[i].mx = i;
    p[i] = i;
  }
  for (int i = 0;i < m;i++){
    int ff = a[v[i]].cur;
    if (ff > 1){
      int ss = ff-1;
      int x = p[ff];
      int y = p[ss];
      swap(p[ff], p[ss]);
      a[x].mn = min(a[x].mn, ss);
      a[x].mx = max(a[x].mx, ss);
      a[y].mn = min(a[y].mn, ff);
      a[y].mx = max(a[y].mx, ff);
      a[x].cur = ss;
      a[y].cur = ff;
    }
  }
  for (int i = 1;i <= n;i++){
    cout << a[i].mn << ' ' << a[i].mx << '\n';
  }
  return 0;
}
