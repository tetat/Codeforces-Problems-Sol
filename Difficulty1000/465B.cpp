/// Problem Name: Inbox (100500)
/// Problem Link: https://codeforces.com/problemset/problem/465/B

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
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int i = 0;
  int j = 0;
  int ans = 0;
  while (i < n){
    while (v[i]==0 && i < n)i++;
    if (i == n)break;
    while (v[i]==1 && i < n){i++;ans++;}
    ans++;
  }
  if (ans)ans--;
  cout << ans << '\n';
  return 0;
}
