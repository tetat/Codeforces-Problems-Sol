/// Problem Name: Trouble Sort
/// Problem Link: https://codeforces.com/problemset/problem/1365/B

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    int zero = 0;
    int one = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      if (el)one++;
      else zero++;
    }
    bool ok = true;
    for (int i = 1;i < n;i++){
      if (v[i-1] > v[i]){
        ok = false;
        break;
      }
    }
    if (ok || (one && zero))cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
