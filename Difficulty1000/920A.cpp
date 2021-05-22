/// Problem Name: Water The Garden
/// Problem Link: https://codeforces.com/problemset/problem/920/A

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
    int n, k, el;
    cin >> n >> k;
    vector <int> v;
    vector <int> mark(n+1, 0);
    for (int i = 0;i < k;i++){
      cin >> el;
      v.pb(el);
    }
    int sec = 0;
    while (true){
      for (int i = 0;i < k;i++){
        if (v[i]-sec >= 1)mark[v[i]-sec] = 1;
        if (v[i]+sec <= n)mark[v[i]+sec] = 1;
      }
      sec++;
      int cnt = 0;
      for (int i = 1;i <= n;i++){
        if (mark[i])cnt++;
      }
      if (n == cnt)break;
    }
    cout << sec << '\n';
  }
  return 0;
}
