/// Problem Name: Grade Allocation
/// Problem Link: https://codeforces.com/problemset/problem/1316/A

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
  cin >> tc;
  while (tc--){
    int n, m, el;
    int sum = 0;
    cin >> n >> m;
    for (int i = 0;i < n;i++){
      cin >> el;
      sum += el;
    }
    cout << (min(sum, m)) << '\n';
  }
  return 0;
}
