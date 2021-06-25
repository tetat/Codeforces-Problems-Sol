/// Problem Name: Leha and Function
/// Problem Link: https://codeforces.com/problemset/problem/840/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

bool cmpi(pair <int, int> &a, pair <int, int> &b){
  return a.first < b.first;
}

bool cmpd(pair <int, int> &a, pair <int, int> &b){
  return a.first > b.first;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <pair <int, int> > a;
  vector <pair <int, int> > b;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(mp(el, i));
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    b.pb(mp(el, i));
  }
  sort(a.begin(), a.end(), cmpd);
  sort(b.begin(), b.end(), cmpi);
  for (int i = 0;i < n;i++){
    v[b[i].second] = a[i].first;
  }
  for (int i = 0;i < n;i++){
    cout << v[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
