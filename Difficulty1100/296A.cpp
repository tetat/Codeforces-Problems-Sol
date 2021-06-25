/// Problem Name: Yaroslav and Permutations
/// Problem Link: https://codeforces.com/problemset/problem/296/A

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
  vector <int> mark(1001, 0);
  int mx = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el]++;
    mx = max(mx, mark[el]);
  }
  int d = (n+1)/2;
  if (d < mx)cout << "NO" << '\n';
  else cout << "YES" << '\n';
  return 0;
}
