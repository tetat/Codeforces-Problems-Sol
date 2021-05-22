/// Problem Name: Generate Login
/// Problem Link: https://codeforces.com/problemset/problem/909/A

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
  string a, b;
  cin >> a >> b;
  int n = a.size();
  int m = b.size();
  vector <string> S;
  for (int i = 0;i < n;i++){
    string ff;
    for (int j = 0;j <= i;j++){
      ff += a[j];
    }
    for (int j = 0;j < m;j++){
      string ss;
      for (int k = 0;k <= j;k++){
        ss += b[k];
      }
      S.pb(ff+ss);
    }
  }
  sort(S.begin(), S.end());
  cout << S[0] << '\n';
  return 0;
}
