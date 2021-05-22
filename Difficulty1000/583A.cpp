/// Problem Name: Asphalting Roads
/// Problem Link: https://codeforces.com/problemset/problem/583/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> h(n+1, 0);
  vector <int> v(n+1, 0);
  int len = n*n;
  int x, y;
  vector <int> w;
  for (int i = 0;i < len;i++){
    cin >> x >> y;
    if (h[x]==0 && v[y]==0){
      h[x] = 1;
      v[y] = 1;
      w.pb(i+1);
    }
  }
  len = w.size();
  for (int i = 0;i < len;i++){
    cout << w[i];
    if (i != len-1)cout << ' ';
  }cout << '\n';
  return 0;
}
