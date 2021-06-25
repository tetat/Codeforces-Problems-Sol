/// Problem Name: Restoring Permutation
/// Problem Link: https://codeforces.com/problemset/problem/1315/C

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
    vector <int> b;
    vector <int> baki;
    map <int, int> m1;
    map <int, int> m2;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> el;
      m1[el] = 1;
      b.pb(el);
    }
    for (int i = 1;i <= n+n;i++){
      if (!m1[i])baki.pb(i);
    }
    m1.clear();
    bool ok = false;
    vector <int> a;
    for (int i = 0;i < n;i++){
      int p1 = b[i];
      for (int j = 0;j < n;j++){
        if (baki[j] && p1 <= baki[j]){
          a.pb(p1);
          a.pb(baki[j]);
          baki[j] = 0;
          break;
        }
      }
    }
    if (a.size() != n+n)cout << "-1" << '\n';
    else {
      for (int i = 0;i < n+n;i++){
        cout << a[i];
        if (i != (n+n)-1)cout << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
