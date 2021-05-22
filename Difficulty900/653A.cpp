/// Problem Name: Bear and Three Balls
/// Problem Link: https://codeforces.com/problemset/problem/653/A

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
  int len = 0;
  int i = 0;
  int j = 0;
  while (j < n){
    while (v[i] == v[j] && j < n)j++;
    v[len] = v[i];
    i = j;
    len++;
  }
  if (len < 3)cout << "NO" << '\n';
  else {
    bool found = false;
    for (int i = 2;i < len;i++){
      if (v[i]-v[i-1]==1 && v[i-1]-v[i-2]==1){
        found = true;
        break;
      }
    }
    if (found)cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
