/// Problem Name: Golden Plate
/// Problem Link: https://codeforces.com/problemset/problem/1031/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int w, h, k;
  cin >> w >> h >> k;
  int ans = 0;
  while (w>0 && h>0 && k--){
    ans += (w*2 + h*2) - 4;
    w -= 4;
    h -= 4;
  }
  cout << ans << '\n';
  return 0;
}
