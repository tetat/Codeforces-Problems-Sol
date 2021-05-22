/// Problem Name: Nastya and Rice
/// Problem Link: https://codeforces.com/problemset/problem/1341/A

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

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int L = abs(c-d);
    int R = c+d;
    int gl = abs(a-b);
    int gr = abs(a+b);
    string ans = "Yes";
    if (L > gr*n || R < gl*n)ans = "No";
    cout << ans << '\n';
  }
  return 0;
}
