/// Problem Name: Simple Game
/// Problem Link: https://codeforces.com/problemset/problem/570/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e3;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  int a = m;
  if (m > n-m)a--;
  else if (m <= n-m)a++;
  if (n==1)a = m;
  cout << a << '\n';
  return 0;
}
