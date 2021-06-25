/// Problem Name: Maximum splitting
/// Problem Link: https://codeforces.com/problemset/problem/870/C

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    int ans = n/4;
    if (n%4==1 || n%4==3)ans = max(0, ans-1);
    if (n==11)ans = 0;
    if (ans == 0)ans = -1;
    cout << ans << '\n';
  }
  return 0;
}
