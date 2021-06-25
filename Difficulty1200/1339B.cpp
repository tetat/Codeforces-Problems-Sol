/// Problem Name: Sorted Adjacent Differences
/// Problem Link: https://codeforces.com/problemset/problem/1339/B

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
    int n, el;
    cin >> n;
    vector <int> v;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    sort(v.begin(), v.end());
    vector <int> a;
    int L = 0;
    int R = n-1;
    while (L <= R){
      if (L!=R){
        a.pb(v[L]);
        a.pb(v[R]);
      }else a.pb(v[R]);
      L++;
      R--;
    }
    for (int i = n-1;i >= 0;i--){
      cout << a[i];
      if (i != 0)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
