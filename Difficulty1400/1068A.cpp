/// Problem Name: Birthday
/// Problem Link: https://codeforces.com/problemset/problem/1068/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, m, k, l;
  cin >> n >> m >> k >> l;
  Long ans = -1;
  if (n >= l+k){
    ans = (l+k)/m;
    if ((l+k)!=m*ans)ans++;
  }
  if (ans*m > n)ans = -1;
  cout << ans << '\n';
  return 0;
}
