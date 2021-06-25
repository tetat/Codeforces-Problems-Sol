/// Problem Name: Random Teams
/// Problem Link: https://codeforces.com/problemset/problem/478/B

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n, m;
  cin >> n >> m;
  Long mod = n%m;
  Long wod = m-mod;
  Long wd = m-wod;
  Long d = n/m;
  Long mn = ((d*(d-1))/2)*wod;
  if (n%m)mn += ((d*(d+1))/2)*wd;
  d = n-(m-1);
  Long mx = (d*(d-1))/2;
  cout << mn << ' ' << mx << '\n';
  return 0;
}
