/// Problem Name: Death Stars (easy)
/// Problem Link: https://codeforces.com/problemset/problem/958/A1

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
  vector <string> a, b;
  for (int i = 0;i < n;i++){
    string in;cin >> in;
    a.pb(in);
  }
  for (int i = 0;i < n;i++){
    string in;cin >> in;
    b.pb(in);
  }
  string ans = "No";
  vector <string> c;
  for (int i = 0;i < n;i++){
    string tm;
    for (int j = 0;j < n;j++){
      tm += b[i][j];
    }
    c.pb(tm);
  }
  bool ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  for (int i = 0;i < n;i++){
    for (int j = 0, k = n-1;j < n/2;j++, k--){
      swap(c[i][j], c[i][k]);
    }
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  c.clear();
  for (int i = 0;i < n;i++){
    string tm;
    for (int j = 0;j < n;j++){
      tm += b[j][i];
    }
    c.pb(tm);
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  for (int i = 0;i < n;i++){
    for (int j = 0, k = n-1;j < n/2;j++, k--){
      swap(c[i][j], c[i][k]);
    }
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  c.clear();
  for (int i = n-1;i >= 0;i--){
    string tm;
    for (int j = n-1;j >= 0;j--){
      tm += b[i][j];
    }
    c.pb(tm);
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  for (int i = 0;i < n;i++){
    for (int j = 0, k = n-1;j < n/2;j++, k--){
      swap(c[i][j], c[i][k]);
    }
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  c.clear();
  for (int i = n-1;i >= 0;i--){
    string tm;
    for (int j = n-1;j >= 0;j--){
      tm += b[j][i];
    }
    c.pb(tm);
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  for (int i = 0;i < n;i++){
    for (int j = 0, k = n-1;j < n/2;j++, k--){
      swap(c[i][j], c[i][k]);
    }
  }
  ok = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i][j] != c[i][j])ok = false;
    }
  }
  if (ok)ans = "Yes";
  cout << ans << '\n';
  return 0;
}
