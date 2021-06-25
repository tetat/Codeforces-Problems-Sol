/// Problem Name: Polygon
/// Problem Link: https://codeforces.com/problemset/problem/1360/E

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
    int n;
    cin >> n;
    string s[n];
    for (int i = 0;i < n;i++){
      cin >> s[i];
    }
    int one = 0;
    string ans = "YES";
    for (int i = 0;i < n-1;i++){
      int j = 0;
      while (j < n && s[i][j]==48)j++;
      int one = 0;
      while (j < n && s[i][j]==49){
        one++;
        j++;
      }
      if (j < n && one){
        if (i+1 < n){
          if (s[i+1][j-1]==48){
            ans = "NO";
            break;
          }
        }
      }
    }
    for (int i = 0;i < n-1;i++){
      int j = 0;
      while (j < n && s[j][i]==48)j++;
      int one = 0;
      while (j < n && s[j][i]==49){
        one++;
        j++;
      }
      if (j < n && one){
        if (i+1 < n){
          if (s[j-1][i+1]==48){
            ans = "NO";
            break;
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
