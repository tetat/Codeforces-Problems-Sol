/// Problem Name: Ilya and a Colorful Walk
/// Problem Link: https://codeforces.com/problemset/problem/1119/A

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
  int n, el;
  vector <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int d1 = 0;
  int d2 = 0;
  for (int i = n-1;i >= 0;i--){
    if (v[i] != v[0]){
      d1 = i;
      break;
    }
  }
  for (int i = 0;i < n;i++){
    if (v[i] != v[n-1]){
      d2 = (n-1)-i;
      break;
    }
  }
  cout << max(d1, d2) << '\n';
  return 0;
}
