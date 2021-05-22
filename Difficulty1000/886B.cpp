/// Problem Name: Vlad and Cafes
/// Problem Link: https://codeforces.com/problemset/problem/886/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  vector <int> mark(N+1, 0);
  int d = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (mark[el] == 0){
      mark[el] = 1;
      d++;
    }
    v.pb(el);
  }
  int ans = v[n-1];
  for (int i = n-1;i >= 0 && d;i--){
    if (mark[v[i]] == 1){
      mark[v[i]] = 2;
      ans = v[i];
      d--;
    }
  }
  cout << ans << '\n';
  return 0;
}
