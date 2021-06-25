/// Problem Name: Jeff and Periods
/// Problem Link: https://codeforces.com/problemset/problem/352/B

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

vector <int> m[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el, mx = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    m[el].pb(i);
    mx = max(mx, el);
  }
  vector <pair <int, int> > v;
  for (int i = 1;i <= mx;i++){
    if (m[i].size()){
      if (m[i].size()==1){
        v.pb(mp(i, 0));
      }else if (m[i].size()==2){
        v.pb(mp(i, m[i][1]-m[i][0]));
      }else {
        int d = m[i][1]-m[i][0];
        bool ok = true;
        for (int j = 1;j < m[i].size();j++){
          if (m[i][j]-m[i][j-1] != d){
            ok = false;
            break;
          }
        }
        if (ok)v.pb(mp(i, d));
      }
    }
  }
  cout << v.size() << '\n';
  for (int i = 0;i < v.size();i++){
    cout << v[i].first << ' ' << v[i].second << '\n';
  }
  return 0;
}
