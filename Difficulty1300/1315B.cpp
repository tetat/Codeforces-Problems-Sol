/// Problem Name: Homecoming
/// Problem Link: https://codeforces.com/problemset/problem/1315/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int a, b, n;
    cin >> a >> b >> n;
    string s;
    cin >> s;
    int len = s.size();
    int R = len-1;
    R--;
    int L = R;
    while (n>0){
      //char ch = s[R];
      while (s[R]==s[L] && L >= 0)L--;
      if (s[R]=='A'){
        if (n-a<=0){
          if (n-a<0){
            n = 0;
            L = R;
          }
          else {
            n = 0;
            R = L;
          }
        }
        else {
          n -= a;
          R = L;
        }
      }
      else {
        if (n-b<=0){
          if (n-b<0){
            n = 0;
            L = R;
          }
          else {
            n = 0;
            R = L;
          }
        }
        else {
          n -= b;
          R = L;
        }
      }
    }
    cout << (L+2) << '\n';
  }
  return 0;
}
