/// Problem Name: Minimal Square
/// Problem Link: https://codeforces.com/problemset/problem/1360/A

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
  cin >> tc;
  while (tc--){
    int a, b;
    cin >> a >> b;
    if (a > b)swap(a, b);
    int ans = max(a+a, b);
    cout << ans*ans << '\n';
  }
  return 0;
}
