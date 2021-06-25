/// Problem Name: Segment Occurrences
/// Problem Link: https://codeforces.com/problemset/problem/1016/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, m, q;
  cin >> n >> m >> q;
  string s, t;
  cin >> s >> t;
  vector <int> mark(n+1, 0);
  int L = 0;
  int R = m-1;
  for ( ;R < n;L++, R++){
    int ad = 1;
    for (int i = L, j = 0;i <= R;i++, j++){
      if (s[i] != t[j]){
        ad = 0;
        break;
      }
    }
    mark[R+1] += ad;
//    if (ad){
//      L += m;
//      R += m;
//    }
  }
//  for (int i = 1;i <= n;i++){
//    mark[i] += mark[i-1];
//  }
//  for (int i = 0;i <= n;i++){
//    cout << mark[i] << ' ';
//  }cout << '\n';
  while (q--){
    cin >> L >> R;
    int ans = 0;
    for (int i = L;i <= R;i++){
      if (i-(m-1)>=L)ans += mark[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
