/// Problem Name: Common Subsequence
/// Problem Link: https://codeforces.com/problemset/problem/1382/A

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
    int n, m, el;
    cin >> n >> m;
    vector <int> v(1001, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      v[el]++;
    }
    int ans = -1;
    for (int i = 0;i < m;i++){
      cin >> el;
      if (ans==-1){
        if (v[el]){
          ans = el;
        }
      }
    }
    if (ans==-1)cout << "NO" << '\n';
    else cout << "YES" << '\n' << 1 << ' ' << ans << '\n';
  }
  return 0;
}
