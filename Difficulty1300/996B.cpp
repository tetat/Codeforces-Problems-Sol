/// Problem Name: World Cup
/// Problem Link: https://codeforces.com/problemset/problem/996/B

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
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el%n <= i)v.pb(el/n);
    else v.pb(el/n+1);
  }
  int mn = INT_MAX;
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (mn > v[i]){
      mn = v[i];
      ans = i+1;
    }
  }
  cout << ans << '\n';
  return 0;
}
