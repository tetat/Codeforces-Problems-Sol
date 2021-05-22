/// Problem Name: Construct the String
/// Problem Link: https://codeforces.com/problemset/problem/1335/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    for (int i = 0;i < n;i++){
      s += (i%b)+97;
    }
    cout << s << '\n';
  }
  return 0;
}
