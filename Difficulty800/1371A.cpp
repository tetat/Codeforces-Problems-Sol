/// Problem Name: Magical Sticks
/// Problem Link: https://codeforces.com/problemset/problem/1371/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    int ans = ceil(double(n)/2.0);
    cout << ans << '\n';
  }
  return 0;
}
