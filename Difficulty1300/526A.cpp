/// Problem Name: King of Thieves
/// Problem Link: https://codeforces.com/problemset/problem/526/A

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

bool mark[101];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  vector <int> v;
  for (int i = 0;i < n;i++){
    if (s[i]=='*'){
      v.pb(i+1);
      mark[i+1] = true;
    }
  }
  string ans = "no";
  for (int i = 0;i < v.size();i++){
    for (int j = 1;j <= n;j++){
      vector <int> tm;
      for (int k = v[i];k <= n;k += j){
        if (mark[k]==false || tm.size()==5)break;
        tm.pb(k);
      }
      if (tm.size()==5){
        ans = "yes";
        break;
      }
    }
    if (ans=="yes")break;
  }
  cout << ans << '\n';
  return 0;
}
