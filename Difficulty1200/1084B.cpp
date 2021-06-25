/// Problem Name: Kvass and the Fair Nut
/// Problem Link: https://codeforces.com/problemset/problem/1084/B

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
  Long n, S, el;
  cin >> n >> S;
  vector <Long> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  v.pb(v[n-1]);
  for (Long i = n-1, r = 0;i >= 0;i--, r++){
    Long d = v[i+1]-v[i];
    S -= d*r;
    if (S < 1)break;
  }
  if (S>0){
    Long d = ceil(S/double(n));
    if (d>v[0])v[0] = -1;
    else v[0] -= d;
  }
  cout << v[0] << '\n';
  return 0;
}
