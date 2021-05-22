/// Problem Name: Donut Shops
/// Problem Link: https://codeforces.com/problemset/problem/1373/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
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
    Long a, b, c;
    cin >> a >> b >> c;
    if (b==1){
      if (a > c)cout << "-1 5" << '\n';
      else if (a < b)cout << "5 -1" << '\n';
      else cout << "-1 -1" << '\n';
    }else {
      if (a < c){
        if (a*b <= c)cout << b-1 << " -1" << '\n';
        else cout << "1 " << b << '\n';
      }else cout << "-1 " << b << '\n';
    }
  }
  return 0;
}
