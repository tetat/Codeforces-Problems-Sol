/// Problem Name: AccurateLee
/// Problem Link: https://codeforces.com/problemset/problem/1369/B

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
    int n;
    string s;
    cin >> n >> s;
    int zero = 0;
    int one = 0;
    for (int i = 0;i < n;i++){
      if (s[i]==48)zero++;
      else one++;
    }
    if (one == 0 || zero == 0){
      cout << s << '\n';
      continue;
    }
    int L = 0;
    int R = n-1;
    while (L < n && s[L]==48)L++;
    while (R >= 0 && s[R]==49)R--;
    string ans;
    if (L > R){
      ans = s;
    }else {
      for (int i = 0;i < L;i++){
        ans += s[i];
      }
      ans += 48;
      for (int i = R+1;i < n;i++){
        ans += s[i];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
