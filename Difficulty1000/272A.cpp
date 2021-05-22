/// Problem Name: Dima and Friends
/// Problem Link: https://codeforces.com/problemset/problem/272/A

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
  int fing = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    fing += el;
  }
  int ans = 0;
  for (int i = 1;i <= 5;i++){
    if ((fing+i) % (n+1) != 1)ans++;
    //cout << (fing+i) << ' ' << (n+1) << '\n';
  }
  cout << ans << '\n';
  return 0;
}
