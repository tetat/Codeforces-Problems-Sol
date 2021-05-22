/// Problem Name: Short Substrings
/// Problem Link: https://codeforces.com/problemset/problem/1367/A

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
    string s;
    cin >> s;
    string ans;
    ans += s[0];
    for (int i = 1;i < s.size()-1;i += 2){
      ans += s[i];
    }
    ans += s[s.size()-1];
    cout << ans << '\n';
  }
  return 0;
}
