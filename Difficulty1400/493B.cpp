/// Problem Name: Vasya and Wrestling
/// Problem Link: https://codeforces.com/problemset/problem/493/B

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

const int N = 1e4;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> v(n);
  vector <int> f;
  vector <int> s;
  Long s_f = 0;
  Long s_s = 0;
  for (int i = 0;i < n;i++){
    cin >> v[i];
    if (v[i] < 0)s.pb(abs(v[i]));
    else f.pb(v[i]);
    if (v[i] > 0)s_f += abs(v[i]);
    else s_s += abs(v[i]);
  }
  if (s_f > s_s)cout << "first" << '\n';
  else if (s_f < s_s)cout << "second" << '\n';
  else {
    if (f > s)cout << "first" << '\n';
    else if (f < s)cout << "second" << '\n';
    else {
      if (v[n-1]>0)cout << "first" << '\n';
      else cout << "second" << '\n';
    }
  }
  return 0;
}
