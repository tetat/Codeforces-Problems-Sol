/// Problem Name: Delete Them
/// Problem Link: https://codeforces.com/problemset/problem/730/H

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

const int N = 1e5;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second < b.second;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  string s[n];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  vector <pair <int, int> > v;
  for (int i = 0;i < m;i++){
    cin >> el;
    v.pb(mp(el-1, s[el-1].size()));
  }
  sort(v.begin(), v.end(), cmp);
  string ans = "No";
  string pat;
  if (v[0].second == v[m-1].second){
    bool found = true;
    int len = v[0].second;
    for (int i = 0;i < len;i++)pat += '?';
    for (int i = 0;i < len;i++){
      char ch = s[v[0].first][i];
      bool ok = true;
      for (int j = 0;j < m;j++){
        if (ch != s[v[j].first][i]){
          ok = false;
          break;
        }
      }
      if (ok){
        pat[i] = ch;
        //found = true;
      }
    }
    //if (found){
      vector <int> mark(n, 0);
      for (int i = 0;i < m;i++){
        mark[v[i].first] = 1;
      }
      for (int i = 0;i < n;i++){
        if (mark[i]==0 && len == int(s[i].size())){
          for (int j = 0;j < len;j++){
            if (pat[j]=='?')s[i][j] = '?';
          }
          if (pat == s[i]){
            found = false;
            break;
          }
        }
      }
    //}
    if (found)ans = "Yes";
  }
  cout << ans << '\n';
  if (ans == "Yes")cout << pat << '\n';
  return 0;
}
