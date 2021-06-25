/// Problem Name: Neighbor Grid
/// Problem Link: https://codeforces.com/problemset/problem/1375/B

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, m;
    cin >> n >> m;
    int ar[n][m];
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        cin >> ar[i][j];
      }
    }
    string ans = "YES";
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        int cnt = 0;
        if (j+1 < m)cnt++;
        if (j-1 >= 0)cnt++;
        if (i+1 < n)cnt++;
        if (i-1 >= 0)cnt++;
        if (cnt >= ar[i][j]){
          ar[i][j] = cnt;
        }else {
          ans = "NO";
          break;
        }
      }
    }
    cout << ans << '\n';
    if (ans=="YES"){
      for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
          cout << ar[i][j] << ' ';
        }cout << '\n';
      }
    }
  }
  return 0;
}
