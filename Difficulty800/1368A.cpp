/// Problem Name: C+=
/// Problem Link: https://codeforces.com/problemset/problem/1368/A

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

void test(){
  Long a = 1;
  Long b = 1;
  while (a <= 1e9 && b <= 1e9){
    if (a > b)swap(a, b);
    a += b;
  }
  cout << "ok" << '\n';
}

int main()
{
  FastIO();
  int tc, ca = 0;
  //test();
  cin >> tc;
  while (tc--){
    Long a, b, n;
    cin >> a >> b >> n;
    Long ans = 0;
    while (a <= n && b <= n){
      if (a > b)swap(a, b);
      a += b;
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}
