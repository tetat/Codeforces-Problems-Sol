/// Problem Name: Seat Arrangements
/// Problem Link: https://codeforces.com/problemset/problem/919/C

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
  int n, m, k;
  cin >> n >> m >> k;
  string s[n];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  k--;
  Long ans = 0;
  //if (m > 1){
    for (int i = 0;i < n;i++){
      int cnt = 0;
      for (int j = 0;j < m;j++){
        if (s[i][j]=='.')cnt++;
        else {
          ans += max(0, cnt-k);
          cnt = 0;
        }
      }
      ans += max(0, cnt-k);
    }
  //}
  //if (n > 1){
    for (int i = 0;i < m;i++){
      int cnt = 0;
      for (int j = 0;j < n;j++){
        if (s[j][i]=='.')cnt++;
        else {
          ans += max(0, cnt-k);
          cnt = 0;
        }
      }
      ans += max(0, cnt-k);
    }
  //}
  //cout << s[0][0] << '\n';
  k++;
  if (k==1)ans /= 2;
  cout << ans << '\n';
  return 0;
}
