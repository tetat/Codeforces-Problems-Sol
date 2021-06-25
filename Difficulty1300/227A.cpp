/// Problem Name: Where do I Turn?
/// Problem Link: https://codeforces.com/problemset/problem/227/A

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

Long ab(Long n){
  return n<0?-n:n;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  Long xa, ya;
  cin >> xa >> ya;
  Long xb, yb;
  cin >> xb >> yb;
  Long xc, yc;
  cin >> xc >> yc;
  Long p = (xb-xa)*(yc-ya) - (xc-xa)*(yb-ya);
  if (p < 0)cout << "RIGHT" << '\n';
  else if (p > 0)cout << "LEFT" << '\n';
  else cout << "TOWARDS" << '\n';
  return 0;
}
