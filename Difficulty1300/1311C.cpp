/// Problem Name: Perform the Combo
/// Problem Link: https://codeforces.com/problemset/problem/1311/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, m, el;
    cin >> n >> m;
    string s;
    cin >> s;
    vector <int> mark(n+1, 0);
    vector <int> v(26, 0);
    for (int i = 0;i < m;i++){
      cin >> el;
      mark[el-1]++;
    }
    mark[n-1]++;
    int cnt = 0;
    for (int i = n-1;i >= 0;i--){
      cnt += mark[i];
      v[s[i]-97] += cnt;
    }
    for (int i = 0;i < 26;i++){
      cout << v[i];
      if (i != 25)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
