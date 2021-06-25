/// Problem Name: Chessboard
/// Problem Link: https://codeforces.com/problemset/problem/961/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <string> a, b, c, d;
  for (int i = 0;i < 4;i++){
    for (int j = 0;j < n;j++){
      string in;cin >> in;
      if (i==0)a.pb(in);
      if (i==1)b.pb(in);
      if (i==2)c.pb(in);
      if (i==3)d.pb(in);
    }
  }
  string zo, oz;
  for (int i = 0;i < n;i++){
    if (i%2){
      zo += 49;
      oz += 48;
    }else {
      zo += 48;
      oz += 49;
    }
  }
  vector <string> offon, onoff;
  for (int i = 0;i < n;i++){
    if (i%2){
      offon.pb(oz);
      onoff.pb(zo);
    }else {
      offon.pb(zo);
      onoff.pb(oz);
    }
  }
  vector <pair <int, int> > dif;
  for (int i = 0;i < 4;i++){
    int ff = 0;
    int ss = 0;
    for (int j = 0;j < n;j++){
      for (int k = 0;k < n;k++){
        if (i==0){
          if (offon[j][k] != a[j][k])ff++;
          if (onoff[j][k] != a[j][k])ss++;
        }else if (i==1){
          if (offon[j][k] != b[j][k])ff++;
          if (onoff[j][k] != b[j][k])ss++;
        }else if (i==2){
          if (offon[j][k] != c[j][k])ff++;
          if (onoff[j][k] != c[j][k])ss++;
        }else {
          if (offon[j][k] != d[j][k])ff++;
          if (onoff[j][k] != d[j][k])ss++;
        }
      }
    }
    dif.pb(mp(ff, ss));
  }
  vector <string> st;
  st.pb("0123");
  st.pb("0213");
  st.pb("0312");
  st.pb("1203");
  st.pb("2301");
  int ans = INT_MAX;
  for (int i = 0;i < st.size();i++){
    int A = st[i][0]-48;
    int B = st[i][1]-48;
    int C = st[i][2]-48;
    int D = st[i][3]-48;
    ans = min(ans, min(dif[A].first+dif[B].first+dif[C].second+dif[D].second, dif[A].second+dif[B].second+dif[C].first+dif[D].first));
  }
  cout << ans << '\n';
  return 0;
}
