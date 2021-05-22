/// Problem Name: Captain Flint and a Long Voyage
/// Problem Link: https://codeforces.com/problemset/problem/1388/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    int eight = ceil(double(n)/4.0);
    int nine = n-eight;
    string ans;
    while (nine--)ans += '9';
    while (eight--)ans += '8';
    cout << ans << '\n';
  }
  return 0;
}
