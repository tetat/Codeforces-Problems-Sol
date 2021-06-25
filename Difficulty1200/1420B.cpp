/// Problem Name: Rock and Lever
/// Problem Link: https://codeforces.com/problemset/problem/1420/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <vector <int> > p(50);
    for (int i = 0;i < n;i++){
      cin >> a[i];
      int cnt = 1;
      int pw = 1;
      while (pw <= a[i]){
        cnt++;
        pw += pw;
      }
      p[cnt].pb(i);
    }
//    for (int i = 0;i < 32;i++){
//      for (int j = 0;j < p[i].size();j++){
//        cout << p[i][j] << ' ';
//      }cout << '\n';
//    }
    Long ans = 0;
    for (int i = 0;i < 50;i++){
      if (p[i].size() > 1){
        Long S = p[i].size();
        ans += (S*(S-1))/2;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
