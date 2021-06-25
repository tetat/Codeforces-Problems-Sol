/// Problem Name: k-rounding
/// Problem Link: https://codeforces.com/problemset/problem/858/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2*1e6;
bool mark[N+1];

Long lcm(Long a, Long b){
  return (a*b)/__gcd(a, b);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, k;
  cin >> n >> k;
  Long p = 1;
  for (int i = 0;i < k;i++)p = p*10;
  cout << lcm(n, p) << '\n';
  return 0;
}
