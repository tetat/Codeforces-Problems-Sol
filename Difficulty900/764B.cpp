/// Problem Name: Timofey and cubes
/// Problem Link: https://codeforces.com/problemset/problem/764/B

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
  for (int i = 0;i < n/2;i += 2){
    swap(v[i], v[n-i-1]);
  }
  for (int i = 0;i < n;i++){
    cout << v[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
