/// Problem Name: Qualifying Contest
/// Problem Link: https://codeforces.com/problemset/problem/659/B

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

int mark[N][801];

bool cmp(pair <int, string> &a, pair <int, string> &b){
  return a.first > b.first;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  vector <pair <int, string> > v[m];
  for (int i = 0;i < n;i++){
    string s;
    int r, p;
    cin >> s >> r >> p;
    v[r-1].pb(mp(p, s));
    mark[r-1][p]++;
  }
  for (int i = 0;i < m;i++){
    sort(v[i].begin(), v[i].end(), cmp);
  }
  for (int i = 0;i < m;i++){
    int ff = -1;
    int ss = -1;
    if (mark[i][v[i][0].first] == 1 && mark[i][v[i][1].first] == 1){
      cout << v[i][0].second << ' ' << v[i][1].second << '\n';
    }else if (mark[i][v[i][0].first] == 2){
      cout << v[i][0].second << ' ' << v[i][1].second << '\n';
    }else cout << "?" << '\n';
  }
  return 0;
}
