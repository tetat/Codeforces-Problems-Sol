/// Problem Name: Reading
/// Problem Link: https://codeforces.com/problemset/problem/234/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool cmp(pair <int, int> a, pair <int, int> b){
  return a.first > b.first;
}

bool cmpr(pair <int, int> a, pair <int, int> b){
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <pair <int, int> > v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i+1));
  }
  sort(v.begin(), v.end(), cmp);
  int mn = v[k-1].first;
  for (int i = 0;i < k;i++){
    v[i].first = -1;
  }
  sort(v.begin(), v.end(), cmpr);
  cout << mn << '\n';
  for (int i = 0;i < n;i++){
    if (v[i].first == -1){
      cout << (i+1) << ' ';
    }
  }cout << '\n';
  return 0;
}
