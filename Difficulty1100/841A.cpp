/// Problem Name: Godsend
/// Problem Link: https://codeforces.com/problemset/problem/841/B

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
  int n, el;
  cin >> n;
  int odd = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el%2)odd++;
  }
  if (odd)cout << "First" << '\n';
  else cout << "Second" << '\n';
  return 0;
}
