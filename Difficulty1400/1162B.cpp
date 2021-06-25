/// Problem Name: Double Matrix
/// Problem Link: https://codeforces.com/problemset/problem/1162/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool construct(vector <vector <int> > &a, vector <vector <int> > &b, int i, int j, int n, int m){
  vector <pair <int, int> > mm;
  if (i-1 >= 0)mm.pb(mp(i-1, j));
  if (j-1 >= 0)mm.pb(mp(i, j-1));
  vector <pair <int, int> > pp;
  if (i+1 < n)pp.pb(mp(i+1, j));
  if (j+1 < m)pp.pb(mp(i, j+1));

  bool ok = true;

  for (int k = 0;k < mm.size();k++){
    if (a[i][j] <= a[mm[k].first][mm[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < pp.size();k++){
    if (a[i][j] >= a[pp[k].first][pp[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < mm.size();k++){
    if (b[i][j] <= b[mm[k].first][mm[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < pp.size();k++){
    if (b[i][j] >= b[pp[k].first][pp[k].second]){
      ok = false;
      break;
    }
  }

  if (ok)return ok;

  ok = true;
  swap(a[i][j], b[i][j]);

  for (int k = 0;k < mm.size();k++){
    if (a[i][j] <= a[mm[k].first][mm[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < pp.size();k++){
    if (a[i][j] >= a[pp[k].first][pp[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < mm.size();k++){
    if (b[i][j] <= b[mm[k].first][mm[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < pp.size();k++){
    if (b[i][j] >= b[pp[k].first][pp[k].second]){
      ok = false;
      break;
    }
  }

  //cout << a[i][j] << ' ' << b[i][j] << '\n';

  return ok;
}

bool check(vector <vector <int> > &a, int i, int j, int n, int m){
  vector <pair <int, int> > mm;
  if (i-1 >= 0)mm.pb(mp(i-1, j));
  if (j-1 >= 0)mm.pb(mp(i, j-1));
  vector <pair <int, int> > pp;
  if (i+1 < n)pp.pb(mp(i+1, j));
  if (j+1 < m)pp.pb(mp(i, j+1));

  bool ok = true;

  for (int k = 0;k < mm.size();k++){
    if (a[i][j] <= a[mm[k].first][mm[k].second]){
      ok = false;
      break;
    }
  }
  for (int k = 0;k < pp.size();k++){
    if (a[i][j] >= a[pp[k].first][pp[k].second]){
      ok = false;
      break;
    }
  }
  return ok;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  vector <vector <int> > a(n);
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      a[i].pb(el);
    }
  }
  vector <vector <int> > b(n);
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      b[i].pb(el);
    }
  }

  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (a[i][j] > b[i][j])swap(a[i][j], b[i][j]);
    }
  }

//  for (int i = 0;i < n;i++){
//    for (int j = 0;j < m;j++){
//      if (!construct(a, b, i, j, n, m)){
//        swap(a[i][j], b[i][j]);
//      }
//    }
//  }

  string ans = "Possible";

  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (!check(a, i, j, n, m) || !check(b, i, j, n, m)){
        ans = "Impossible";
        break;
      }
    }if (ans == "Impossible")break;
  }

  cout << ans << '\n';
  return 0;
}
