/// Problem Name: Mike and strings
/// Problem Link: https://codeforces.com/problemset/problem/798/B

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
  int n;
  cin >> n;
  string s[n];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  int ans = INT_MAX;
  for (int i = 0;i < n;i++){
    bool ok = true;
    int cnt = 0;
    for (int j = 0;j < n;j++){
      bool ok2 = false;
      int cnt2 = 0;
      int q = s[i].size();
      string tm = s[j];
      while (q--){
        if (s[i]==tm){
          //cout << s[i] << ' ' << tm << '\n';
          ok2 = true;
          break;
        }
        char ch = tm[0];
        tm += ch;
        tm.erase(tm.begin());
        //cout << tm << '\n';
        cnt2++;
      }
      if (ok2==false){
        ok = false;
        break;
      }
      cnt += cnt2;
    }
    if (ok==false)break;
    ans = min(ans, cnt);
  }
  if (ans==INT_MAX)ans = -1;
  cout << ans << '\n';
  return 0;
}
