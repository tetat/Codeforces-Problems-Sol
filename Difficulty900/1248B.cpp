/// Problem Name: Grow The Tree
/// Problem Link: https://codeforces.com/problemset/problem/1248/B

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
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  int L = 0;
  int R = n-1;
  Long x = 0;
  Long y = 0;
  while (L <= R){
    if (L < R){
      x += v[R];
      y += v[L];
      R--;
      L++;
    }else {
      x += v[R];
      R--;
      L++;
    }
  }
  cout << (x*x)+(y*y) << '\n';
  return 0;
}
