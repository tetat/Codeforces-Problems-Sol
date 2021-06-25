/// Problem Name: Two Teams Composing
/// Problem Link: https://codeforces.com/problemset/problem/1335/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> mark(n+1, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      mark[el]++;
    }
    vector <int> v;
    for (int i = 1;i <= n;i++){
      if (mark[i])v.pb(mark[i]);
    }
    int len = v.size();
    int x = 0;
    for (int i = 0;i < len;i++){
      if (v[i] < len)x = max(x, min(len, v[i]));
      else x = max(x, min(len, v[i]-1));
    }
    cout << x << '\n';
  }
  return 0;
}
