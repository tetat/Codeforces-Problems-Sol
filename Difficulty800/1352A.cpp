/// Problem Name: Sum of Round Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1352/A

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    int n = s.size();
    vector <string> ans;
    for (int i = 0;i < n;i++){
      if (s[i]!=48){
        string in;
        in += s[i];
        for (int j = i+1;j < n;j++){
          in += 48;
        }
        ans.pb(in);
      }
    }
    int k = ans.size();
    cout << k << '\n';
    for (int i = 0;i < k;i++){
      cout << ans[i] << ' ';
    }cout << '\n';
  }
  return 0;
}
