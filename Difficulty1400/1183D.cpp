/// Problem Name: Candy Box (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1183/D

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> m(n, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      m[el-1]++;
    }
    vector <int> v;
    for (int i = n-1;i >= 0;i--){
      if (m[i])v.pb(m[i]);
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for (int i = 0;i < v.size();i++){
      if (i){
        if (v[i-1]<=v[i]){
          v[i] = v[i-1]-1;
          ans += max(0, v[i]);
        }else ans += max(0, v[i]);
      }else ans += max(0, v[i]);
    }
    cout << ans << '\n';
  }
  return 0;
}
