/// Problem Name: Complete the Word
/// Problem Link: https://codeforces.com/problemset/problem/716/B

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
  string s;
  cin >> s;
  int n = s.size();
  string ans = "-1";
  for (int L = 0, R = 25;R < n;L++, R++){
    vector <int> mark(26, 0);
    int tot = 0;
    int q = 0;
    for (int i = L;i <= R;i++){
      if (s[i]=='?'){
        q++;
        continue;
      }
      if (mark[s[i]-65]==0){
        mark[s[i]-65]++;
        tot++;
      }
    }
    //cout << tot << ' ' << q << '\n';
    if (tot+q == 26){
      for (int i = L;i <= R;i++){
        if (s[i]=='?'){
          for (int j = 0;j < 26;j++){
            if (mark[j]==0){
              s[i] = j+65;
              mark[j]++;
              break;
            }
          }
        }
      }
      for (int i = 0;i < n;i++){
        if (s[i]=='?')s[i] = 65;
      }
      ans = s;
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
