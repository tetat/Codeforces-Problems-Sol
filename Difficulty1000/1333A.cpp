/// Problem Name: Little Artem
/// Problem Link: https://codeforces.com/problemset/problem/1333/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        if (i%2){
          if (j%2)s[i]+='B';
          else s[i]+='W';
        }else {
          if (j%2)s[i]+='W';
          else s[i]+='B';
        }
      }
      //cout << s[i] << '\n';
    }
    if ((n*m)%2==0){
      if (s[n-1][m-1]=='W')s[n-1][m-1] = 'B';
      else s[n-1][m-2] = 'B';
    }
    for (int i = 0;i < n;i++){
      cout << s[i] << '\n';
    }
  }
  return 0;
}
