/// Problem Name: Technogoblet of Fire
/// Problem Link: https://codeforces.com/problemset/problem/1121/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m, k, el;
  cin >> n >> m >> k;
  vector <int> p;
  for (int i = 0;i < n;i++){
    cin >> el;
    p.pb(el);
  }
  vector <int> sc[m+1];
  vector <int> ts;
  for (int i = 0;i < n;i++){
    cin >> el;
    ts.pb(el);
    sc[el].pb(p[i]);
  }
  vector <int> ch;
  int ans = 0;
//  for (int i = 1;i <= m;i++){
//    int len = sc[i].size();
//    for (int j = 0;j < len;j++){
//      cout << sc[i][j];
//      if (j != len-1)cout << ' ';
//    }cout << '\n';
//  }
  for (int i = 0;i < k;i++){
    cin >> el;
    int po = p[el-1];
    int len = sc[ts[el-1]].size();
    int mx = 0;
    //cout << "po " << po << ' ' << ts[el-1] << '\n';
    for (int j = 0;j < len;j++){
      //cout << sc[ts[el-1]][j] << ' ';
      if (po < sc[ts[el-1]][j]){
        ans++;
        break;
      }
    }//cout << '\n';
  }
  cout << ans << '\n';
  return 0;
}
