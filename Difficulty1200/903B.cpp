/// Problem Name: The Modcrab
/// Problem Link: https://codeforces.com/problemset/problem/903/B

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
  int h1, a1, c1;
  int h2, a2;
  cin >> h1 >> a1 >> c1;
  cin >> h2 >> a2;
  vector <string> S;
  int hl = c1-a2;
  while (h2>0){
    if (h1 <= a2 && h2 > a1){
      S.pb("HEAL");
      h1 += c1;
      h1 -= a2;
    }
    else {
      S.pb("STRIKE");
      h1 -= a2;
      h2 -= a1;
    }
  }
  int len = S.size();
  cout << len << '\n';
  for (int i = 0;i < len;i++){
    cout << S[i] << '\n';
  }
  return 0;
}
