/// Problem Name: Japanese Crosswords Strike Back
/// Problem Link: https://codeforces.com/problemset/problem/884/B

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
  int n, x, el;
  vector <int> v;
  Long sum = 0;
  cin >> n >> x;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
  }
  //cout << sum << '\n';
  if (sum+n-1==x)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
