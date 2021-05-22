/// Problem Name: Contest for Robots
/// Problem Link: https://codeforces.com/problemset/problem/1321/A

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
  vector <int> a;
  vector <int> b;
  vector <int> mark(101, 0);
  cin >> n;
  int ra = 0;
  int rb = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(el);
    if (el)ra++;
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    b.pb(el);
    if (el)rb++;
  }
  int mx = rb+1;
  int cut = 0;
  for (int i = 0;i < n;i++){
    if (a[i] && b[i])cut++;
  }
  ra -= cut;
  rb -= cut;
  int ans = 0;
  if (ra==0)ans = -1;
  else if (ra > rb)ans = 1;
  else ans = ceil((rb+1)/double(ra));
  cout << ans << '\n';
  return 0;
}
