/// Problem Name: Pluses and Minuses
/// Problem Link: https://codeforces.com/problemset/problem/1373/C

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

const int N = 1e7;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long ans = 0;
    string s;
    cin >> s;
    int i = 0;
    int len = s.size();
    int mn = 0;
    int cnt = 0;
    for (int i = 0;i < len;i++){
      if (s[i] == '-'){
        cnt--;
        if (cnt < mn){
          mn = cnt;
          ans += i+1;
        }
      }else cnt++;
    }
    ans += len;
    cout << ans << '\n';
  }
  return 0;
}
