/// Problem Name: Display Size
/// Problem Link: https://codeforces.com/problemset/problem/747/A

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
  int n, r, c;
  cin >> n;
  for (int i = 1;i*i <= n;i++){
    if (n%i == 0){
      r = i;
      c = n/i;
    }
  }
  cout << r << ' ' << c << '\n';
  return 0;
}
