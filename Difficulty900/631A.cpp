/// Problem Name: Interview
/// Problem Link: https://codeforces.com/problemset/problem/631/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, el;
  cin >> n;
  vector <Long> a;
  vector <Long> b;
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(el);
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    b.pb(el);
  }
  Long ans = 0;
  Long suma = a[0];
  Long sumb = b[0];
  for (int i = 0;i < n;i++){
    suma |= a[i];
    sumb |= b[i];
  }
  cout << (suma+sumb) << '\n';
  return 0;
}
