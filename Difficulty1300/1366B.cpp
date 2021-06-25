/// Problem Name: Shuffle
/// Problem Link: https://codeforces.com/problemset/problem/1366/B

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

const int N = 1e4;


int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, x, m;
    cin >> n >> x >> m;
    int L = x;
    int R = x;
    while (m--){
      int a, b;
      cin >> a >> b;
      if (a <= R && L <= b){
        if (a < L)L = a;
        if (R < b)R = b;
      }
    }
    cout << (R-L)+1 << '\n';
  }
  return 0;
}
