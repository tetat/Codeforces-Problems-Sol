/// Problem Name: Best Subsegment
/// Problem Link: https://codeforces.com/problemset/problem/1117/A

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
  int n, el;
  vector <int> v;
  cin >> n;
  int mx = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    mx = max(mx, el);
    v.pb(el);
  }
  int ans = 0;
  int i = 0;
  while (i < n){
    int cnt = 0;
    while (i < n && v[i]==mx){cnt++;i++;}
    while (i < n && v[i]!=mx)i++;
    ans = max(ans, cnt);
  }
  cout << ans << '\n';
  return 0;
}
