/// Problem Name: Doors Breaking and Repairing
/// Problem Link: https://codeforces.com/problemset/problem/1102/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, x, y, el;
  cin >> n >> x >> y;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  if (x > y)cout << n << '\n';
  else {
    sort(v.begin(), v.end());
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < n){
      while (i < n && (v[i]>x||v[i]==0))i++;
      if (i < n){
        ans++;
        v[i] = 0;
        i++;
      }
      while (j < n && v[j]==0)j++;
      if (j < n)v[j] += y;j++;
    }
    cout << ans << '\n';
  }
  return 0;
}
