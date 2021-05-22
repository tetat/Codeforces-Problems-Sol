/// Problem Name: Odds and Ends
/// Problem Link: https://codeforces.com/problemset/problem/849/A

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
    v.pb(el);
  }
  string ans = "No";
  int len = v.size();
  if (len%2 && v[len-1]%2 && v[0]%2)ans = "Yes";
  cout << ans << '\n';
  return 0;
}
