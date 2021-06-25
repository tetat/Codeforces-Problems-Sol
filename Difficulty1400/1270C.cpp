/// Problem Name: Make Good
/// Problem Link: https://codeforces.com/problemset/problem/1270/C

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
    Long n, el;
    cin >> n;
    Long S = 0;
    Long x = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      S += el;
      x ^= el;
    }
    cout << 2 << '\n' << x << ' ' << S+x << '\n';
  }
  return 0;
}
