/// Problem Name: Omkar and Password
/// Problem Link: https://codeforces.com/problemset/problem/1392/A

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
    int n, el;
    cin >> n;
    map <int, int> m;
    int dif = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      if (!m[el])dif++;
      m[el]++;
    }
    if (dif==1)cout << n << '\n';
    else cout << 1 << '\n';
  }
  return 0;
}
