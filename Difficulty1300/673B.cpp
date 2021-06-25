/// Problem Name: Problems for Round
/// Problem Link: https://codeforces.com/problemset/problem/673/B

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

bool d1[N*2+1];
bool d2[N*2+1];
//bool mark[N*2+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  int d1_tot = 0;
  int d2_tot = 0;
  int d1_mn = INT_MAX;
  int d2_mx = 0;
  int u, v;
  int valid = 1;
  for (int i = 0;i < m;i++){
    cin >> u >> v;
    if (u < v){
      if (u >= d1_mn || v <= d2_mx)valid = 0;
      else {
        if (d1[v]==false)d1_tot++;
        d1[v] = true;
        if (d2[u]==false)d2_tot++;
        d2[u] = true;
        d1_mn = min(d1_mn, v);
        d2_mx = max(d2_mx, u);
      }
    }else {
      if (u <= d2_mx || v >= d1_mn)valid = 0;
      else {
        if (d1[u]==false)d1_tot++;
        d1[u] = true;
        if (d2[v]==false)d2_tot++;
        d2[v] = true;
        d1_mn = min(d1_mn, u);
        d2_mx = max(d2_mx, v);
      }
    }
  }
  int ans = 0;
  if (valid){
    //cout << d1_tot << ' ' << d2_tot << '\n';
    if (m==0)ans = n-1;
    else ans = d1_mn - d2_mx;
  }
  cout << ans << '\n';
  return 0;
}
