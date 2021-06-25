/// Problem Name: Three displays
/// Problem Link: https://codeforces.com/problemset/problem/987/C

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
  vector <int> s(n);
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  vector <int> c(n);
  for (int i = 0;i < n;i++){
    cin >> c[i];
  }
  vector <int> two(n, 1);
  vector <int> t_cost(n, 0);
  for (int i = 0;i < n;i++){
    int mn = 1e9;
    for (int j = 0;j < i;j++){
      if (s[i] > s[j])mn = min(mn, c[j]);
    }
    if (mn < 1e9){
      two[i]++;
      t_cost[i] = c[i]+mn;
    }
  }
  int ans = 1e9;
  for (int i = 0;i < n;i++){
    int mn = 1e9;
    for (int j = 0;j < i;j++){
      if (two[j]==2 && s[i] > s[j])mn = min(mn, t_cost[j]);
    }
    if (mn < 1e9){
      ans = min(ans, c[i]+mn);
    }
  }
//  for (int i = 0;i < n;i++){
//    cout << two[i] << ' ';
//  }cout << '\n';
  if (ans==1e9)ans = -1;
  cout << ans << '\n';
  return 0;
}
