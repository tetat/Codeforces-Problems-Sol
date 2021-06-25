/// Problem Name: Two Bags of Potatoes
/// Problem Link: https://codeforces.com/problemset/problem/239/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int y, k, n;
  cin >> y >> k >> n;
  int d = (y+k)/k;
  int st = d*k;
  if (st > n)cout << "-1" << '\n';
  else {
    for (int i = st;i <= n;i += k){
      cout << i-y << ' ';
    }cout << '\n';
  }
  return 0;
}
