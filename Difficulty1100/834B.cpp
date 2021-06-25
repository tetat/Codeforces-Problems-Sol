/// Problem Name: The Festive Evening
/// Problem Link: https://codeforces.com/problemset/problem/834/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int mark[26][N+1];

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector <int> alpha(26, 0);
  for (int i = 0;i < n;i++){
    mark[s[i]-65][i] = 1;
    alpha[s[i]-65] = 1;
  }
  vector <pair <int, int> > v;
  for (int i = 0;i < 26;i++){
    if (alpha[i]){
      int L = -1;
      int R = -1;
      for (int j = 0;j < n;j++){
        if (mark[i][j] && L==-1)L = j;
        if (mark[i][j])R = j;
      }
      v.pb(mp(L, R));
    }
  }
  int len = v.size();
  int g = len;
  sort(v.begin(), v.end(), cmp);
  for (int i = 0;i < len;i++){
    for (int j = i+1;j < len;j++){
      if (v[i].second < v[j].first){g--;break;}
    }
  }
  if (g <= k)cout << "NO" << '\n';
  else cout << "YES" << '\n';
  return 0;
}
