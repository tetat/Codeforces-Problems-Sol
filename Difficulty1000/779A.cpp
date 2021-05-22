/// Problem Name: Pupils Redistribution
/// Problem Link: https://codeforces.com/problemset/problem/779/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> a(6, 0);
  vector <int> b(6, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    a[el]++;
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    b[el]++;
  }
  int ans = 0;
  for (int i = 1;i <= 5;i++){
    if ((a[i]+b[i])%2){
      ans = -1;
      break;
    }
  }
  if (ans==-1){
    cout << ans << '\n';
    return 0;
  }
  for (int i = 1;i <= 5;i++){
    if (a[i]==b[i]){
      a[i] = 0;
      b[i] = 0;
    }
  }
  for (int i = 1;i <= 5;i++){
    int mx = max(a[i], b[i]);
    int mn = min(a[i], b[i]);
    ans += mx- (mx+mn)/2;
  }
  cout << int(ans/2) << '\n';
  return 0;
}
