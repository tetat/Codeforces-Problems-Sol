/// Problem Name: Draw!
/// Problem Link: https://codeforces.com/problemset/problem/1131/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <pair <int, int> > v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i].first >> v[i].second;
  }
  Long ans = 0;
  for (int i = 0;i < n;i++){
    if (i){
      Long a = min(v[i].first, v[i].second);
      Long b = max(v[i-1].first, v[i-1].second);
      if (a >= b){
        ans += a-b;
        if (v[i-1].first != v[i-1].second)ans++;
      }
    }else {
      Long a = min(v[i].first, v[i].second);
      ans += a+1;
    }
  }
  cout << ans << '\n';
  return 0;
}
