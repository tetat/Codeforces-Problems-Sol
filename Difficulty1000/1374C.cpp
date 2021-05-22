/// Problem Name: Move Brackets
/// Problem Link: https://codeforces.com/problemset/problem/1374/C

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

const int N = 1e7;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    string s;
    cin >> n >> s;
    stack <char> O, C;
    for (int i = 0;i < n;i++){
      if (s[i] == '(')O.push(s[i]);
      else {
        if (O.empty())C.push(s[i]);
        else O.pop();
      }
    }
    int ans = O.size() + C.size();
    cout << ans/2 << '\n';
  }
  return 0;
}
