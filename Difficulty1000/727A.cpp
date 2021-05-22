/// Problem Name: Transformation: from A to B
/// Problem Link: https://codeforces.com/problemset/problem/727/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

vector <Long> ans;
void dfs(Long a, Long b, vector <Long> &path){
  if (a==b){
    path.pb(a);
    ans = path;
    return;
  }
  if (a > b)return;
  path.pb(a);
  dfs(a+a, b, path);
  dfs(a*10+1, b, path);
  path.pop_back();
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long a, b;
  vector <Long> p;
  cin >> a >> b;
  dfs(a, b, p);
  int len = ans.size();
  if (len){
    cout << "YES" << '\n' << len << '\n';
    for (int i = 0;i < len;i++){
      cout << ans[i];
      if (i != len-1)cout << ' ';
    }cout << '\n';
  }else cout << "NO" << '\n';
  return 0;
}
