/// Problem Name: String Modification
/// Problem Link: https://codeforces.com/problemset/problem/1316/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s;
    int n;
    cin >> n >> s;
    string ans = s;
    int k = 1;
    if (n%2){
      int r = 2;
      for ( ;r <= n;r++){
        string tmp;
        if (r%2==0){
          for (int i = r-1;i < n;i++)tmp += s[i];
          for (int i = 0;i < r-1;i++)tmp += s[i];
          if (ans > tmp){
            ans = tmp;
            k = r;
          }
        }
        else {
          for (int i = r-1;i < n;i++)tmp += s[i];
          for (int i = r-2;i >= 0;i--)tmp += s[i];
          if (ans > tmp){
            ans = tmp;
            k = r;
          }
        }
      }
    }
    else {
      int r = 2;
      for ( ;r <= n;r++){
        string tmp;
        if (r%2){
          for (int i = r-1;i < n;i++)tmp += s[i];
          for (int i = 0;i < r-1;i++)tmp += s[i];
          if (ans > tmp){
            ans = tmp;
            k = r;
          }
        }
        else {
          for (int i = r-1;i < n;i++)tmp += s[i];
          for (int i = r-2;i >= 0;i--)tmp += s[i];
          if (ans > tmp){
            ans = tmp;
            k = r;
          }
        }
      }
    }
    cout << ans << '\n' << k << '\n';
  }
  return 0;
}
