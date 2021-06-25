/// Problem Name: Binary Period
/// Problem Link: https://codeforces.com/problemset/problem/1342/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    int n = s.size();
    int zero = 0;
    int one = 0;
    for (int i = 0;i < n;i++){
      if (s[i]==48)zero++;
      if (s[i]==49)one++;
    }
    string ans;
    if (zero==0 || one==0)ans = s;
    else {
      char ch = s[n-1];
      //int len = max(zero, one);
      for (int i = 0;i < n+n;i++){
        if (ch==48)ch = 49;
        else ch = 48;
        ans += ch;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
