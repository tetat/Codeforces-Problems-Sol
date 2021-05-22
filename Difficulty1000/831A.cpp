/// Problem Name: Unimodal Array
/// Problem Link: https://codeforces.com/problemset/problem/831/A

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
  int i = 0;
  int j = n-2;
  v.pb(0);
  while (i < n-1 && v[i+1] > v[i])i++;
  while (i < n-1 && v[i] == v[i+1])i++;
  while (i < n && v[i]>v[i+1])i++;
  //cout << i << '\n';
  if (i == n)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
