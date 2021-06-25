/// Problem Name: Cosmic Tables
/// Problem Link: https://codeforces.com/problemset/problem/222/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, k, el;
  cin >> n >> m >> k;
  vector <vector <int> > v(n);
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      v[i].pb(el);
    }
  }
  int r[n];
  for (int i = 0;i < n;i++){
    r[i] = i;
  }
  int c[m];
  for (int i = 0;i < m;i++){
    c[i] = i;
  }
  while (k--){
    string s;
    int x, y;
    cin >> s >> x >> y;
    x--;y--;
    if (s=="r")swap(r[x], r[y]);
    else if (s=="c")swap(c[x], c[y]);
    else cout << v[r[x]][c[y]] << '\n';
  }
  return 0;
}
