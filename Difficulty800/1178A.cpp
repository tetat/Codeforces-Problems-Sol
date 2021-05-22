/// Problem Name: Prime Minister
/// Problem Link: https://codeforces.com/problemset/problem/1178/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 4e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  cin >> n;
  int tot = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    tot += el;
  }
  vector <int> p;
  p.pb(1);
  int al = v[0];
  for (int i = 1;i < n;i++){
    if (v[i] <= v[0]/2){
      al += v[i];
      p.pb(i+1);
    }
  }
  if (al > tot/2){
    int k = p.size();
    cout << k << '\n';
    for (int i = 0;i < k;i++){
      cout << p[i];
      if (i != k-1)cout << ' ';
    }cout << '\n';
  }else cout << 0 << '\n';
  return 0;
}
