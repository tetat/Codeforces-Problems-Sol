/// Problem Name: Tritonic Iridescence
/// Problem Link: https://codeforces.com/problemset/problem/957/A

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
  int n;
  string s;
  cin >> n >> s;
  string ans = "YES";
  for (int i = 1;i < n;i++){
    if (s[i]!='?' && s[i]==s[i-1]){
      ans = "NO";
      break;
    }
  }
  if (ans=="YES"){
    ans = "NO";
    int i = 0;
    while (i < n){
      int cnt = 0;
      while (i < n && s[i]=='?'){
        cnt++;
        i++;
      }
      if (cnt){
        if (cnt > 1){
          ans = "YES";
          break;
        }else {
          if (i==n || i-2 < 0){
            ans = "YES";
            break;
          }
          if (s[i]==s[i-2]){
            ans = "YES";
            break;
          }
        }
      }
      while (i < n && s[i] != '?')i++;
    }
  }
  cout << ans << '\n';
  return 0;
}
