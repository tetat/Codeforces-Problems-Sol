/// Problem Name: Captain Flint and Crew Recruitment
/// Problem Link: https://codeforces.com/problemset/problem/1388/A

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
    if (n < 31)cout << "NO" << '\n';
    else {
      cout << "YES" << '\n';
      int a = 14;
      int b = 10;
      int c = 6;
      int d = n - (a+b+c);
      if (a==d || b==d || c==d){
        a++;
        d--;
      }
      cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    }
  }
  return 0;
}
