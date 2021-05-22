/// Problem Name: Memory and Crow
/// Problem Link: https://codeforces.com/problemset/problem/712/A

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
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  vector <int> a;
  int R = 0;
  for (int i = n-1;i >= 0;i--){
    a.pb(v[i]+R);
    R = v[i];
  }
  for (int i = n-1;i >= 0;i--){
    cout << a[i];
    if (i != 0)cout << ' ';
  }cout << '\n';
  return 0;
}
