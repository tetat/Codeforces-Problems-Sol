/// Problem Name: Matrix Game
/// Problem Link: https://codeforces.com/problemset/problem/1365/A

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
    int n, m, el;
    cin >> n >> m;
    vector <vector <int> > v(n);
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        cin >> el;
        v[i].pb(el);
      }
    }
    int tot = 0;
    for (int x = 0;x < n;x++){
      for (int y = 0;y < m;y++){
        if (v[x][y]==0){
          int ad = 1;
          for (int i = 0;i < n;i++){
            if (v[i][y]){
              ad = 0;
              break;
            }
          }
          for (int i = 0;i < m;i++){
            if (v[x][i]){
              ad = 0;
              break;
            }
          }
          tot += ad;
          if (ad)v[x][y] = 1;
        }
      }
    }
    if (tot%2)cout << "Ashish" << '\n';
    else cout << "Vivek" << '\n';
  }
  return 0;
}
