/// Problem Name: Yet Another Tetris Problem
/// Problem Link: https://codeforces.com/problemset/problem/1324/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 4e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    int even = 0;
    int odd = 0;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> el;
      if (el%2)odd++;
      else even++;
    }
    if (odd && even)cout << "NO" << '\n';
    else cout << "YES" << '\n';
  }
  return 0;
}
