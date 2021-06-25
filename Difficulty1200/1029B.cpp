/// Problem Name: Creating the Contest
/// Problem Link: https://codeforces.com/problemset/problem/1029/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  vector <int> mark(n, 0);
  for (int i = 0;i < n-1;i++){
    if (v[i]+v[i] >= v[i+1]){
      mark[i] = 1;
      //mark[i+1] = 1;
    }
  }
  int ans = 0;
  int i = 0;
  while (i < n){
    int cnt = 0;
    while (i < n && mark[i]){
      cnt++;
      i++;
    }
    ans = max(ans, cnt);
    while (i < n && !mark[i])i++;
  }
  cout << ans+1 << '\n';
  return 0;
}
