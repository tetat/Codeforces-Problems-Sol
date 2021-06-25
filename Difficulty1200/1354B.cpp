/// Problem Name: Ternary String
/// Problem Link: https://codeforces.com/problemset/problem/1354/B

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
    string s;
    cin >> s;
    int ans = INT_MAX;
    int i = 0;
    int j = 0;
    vector <int> m(3, 0);
    int n = s.size();
    while (j < n){
      m[s[j]-49]++;
      j++;
      //cout << m[0] << ' ' << m[1] << ' ' << m[2] << '\n';
      while (i < n && m[0] && m[1] && m[2]){
        ans = min(ans, (j-i));
        m[s[i]-49]--;
        i++;
      }
    }
    if (ans == INT_MAX)ans = 0;
    cout << ans << '\n';
  }
  return 0;
}
