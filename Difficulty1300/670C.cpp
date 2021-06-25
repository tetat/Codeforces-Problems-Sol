/// Problem Name: Cinema
/// Problem Link: https://codeforces.com/problemset/problem/670/C

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

const int N = 1e6;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second > b.second;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  map <int, int> m;
  for (int i = 0;i < n;i++){
    cin >> el;
    m[el]++;
  }
  int q;
  cin >> q;
  vector <pair <int, int> > v(q);
  int mx = 0;
  for (int i = 0;i < q;i++){
    cin >> v[i].first;
    mx = max(mx, m[v[i].first]);
  }
  for (int i = 0;i < q;i++){
    cin >> v[i].second;
  }
  vector <pair <int, int> > ans;
  for (int i = 0;i < q;i++){
    if (mx == m[v[i].first]){
      ans.pb(mp(i+1, m[v[i].second]));
    }
  }
  sort(ans.begin(), ans.end(), cmp);
  cout << ans[0].first << '\n';
  return 0;
}
