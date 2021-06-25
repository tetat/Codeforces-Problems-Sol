/// Problem Name: Level Statistics
/// Problem Link: https://codeforces.com/problemset/problem/1334/A

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
    vector <pair <int, int> > v;
    int a, b;
    for (int i = 0;i < n;i++){
      cin >> a >> b;
      v.pb(mp(a, b));
    }
    string ans = "yes";
    for (int i = 0;i < n-1;i++){
      a = v[i+1].first-v[i].first;
      b = v[i+1].second-v[i].second;
      if (v[i].first < v[i].second || a < b || a<0 || b<0){
        ans = "no";
        break;
      }
    }
    if (v[n-1].first < v[n-1].second)ans = "no";
    cout << ans << '\n';
  }
  return 0;
}
