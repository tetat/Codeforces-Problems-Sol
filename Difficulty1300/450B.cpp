/// Problem Name: Jzzhu and Sequences
/// Problem Link: https://codeforces.com/problemset/problem/450/B

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
  Long x, y, n;
  cin >> x >> y >> n;
  Long m = int((1e9)+7);
  vector <Long> v(100, 0);
  v[0] = x;
  v[1] = y;
  for (int i = 2;i < 15;i++){
    v[i] = (v[i-1]-v[i-2])%m;
  }
//  for (int i = 0;i < 6;i++){
//    cout << v[i] << ' ';
//  }cout << '\n';
  Long num = v[(n-1)%6];
  Long ans = (num+m)%m;
  cout << ans << '\n';
  return 0;
}
