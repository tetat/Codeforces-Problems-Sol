/// Problem Name: Make Them Equal
/// Problem Link: https://codeforces.com/problemset/problem/1154/B

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
  vector <int> mark(101, 0);
  vector <int> v;
  cin >> n;
  int cnt = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (mark[el]==0){
      v.pb(el);
      cnt++;
    }
    mark[el]++;
  }
  if (cnt > 3)cout << "-1" << '\n';
  else {
    sort(v.begin(), v.end());
    if (cnt==1)cout << "0" << '\n';
    else if (cnt==2){
      int d = (v[1]+v[0])/2;
      if ((v[1]-d) == (d-v[0]))cout << v[1]-d << '\n';
      else cout << v[1]-v[0] << '\n';
    }
    else {
      if ((v[2]-v[1])==(v[1]-v[0]))cout << v[2]-v[1] << '\n';
      else cout << "-1" << '\n';
    }
  }
  return 0;
}
