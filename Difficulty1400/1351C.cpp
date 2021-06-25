/// Problem Name: Skier
/// Problem Link: https://codeforces.com/problemset/problem/1351/C

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
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    map <pair <int, int>, map <pair <int, int>, int> > m;
    Long ans = 0;
    int x = 0;
    int y = 0;
    int xx = 0;
    int yy = 0;
    for (int i = 0;i < s.size();i++){
      if (s[i]=='S')x++;
      if (s[i]=='N')x--;
      if (s[i]=='E')y++;
      if (s[i]=='W')y--;
      if (m[{xx, yy}][{x, y}] == 0){
        ans += 5;
        m[{xx, yy}][{x, y}] = 1;
        m[{x, y}][{xx, yy}] = 1;
      }else ans++;
      xx = x;
      yy = y;
    }
    cout << ans << '\n';
  }
  return 0;
}
