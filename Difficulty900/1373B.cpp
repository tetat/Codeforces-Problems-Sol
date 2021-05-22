/// Problem Name: 01 Game
/// Problem Link: https://codeforces.com/problemset/problem/1373/B

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
    string s;
    cin >> s;
    int zero = 0;
    int one = 0;
    for (int i = 0;i < s.size();i++){
      if (s[i] == 48)zero++;
      else one++;
    }
    if (min(zero, one) % 2)cout << "DA" << '\n';
    else cout << "NET" << '\n';
  }
  return 0;
}
