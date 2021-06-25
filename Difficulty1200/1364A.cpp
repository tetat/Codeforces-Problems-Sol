/// Problem Name: XXXXX
/// Problem Link: https://codeforces.com/problemset/problem/1364/A

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
    int n, x;
    cin >> n >> x;
    vector <int> v(n);
    int sum = 0;
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    int ans = -1;
    for (int i = 0;i < n;i++){
      sum += v[i];
      if (sum%x)ans = max(ans, i+1);
    }
    reverse(v.begin(), v.end());
    sum = 0;
    for (int i = 0;i < n;i++){
      sum += v[i];
      if (sum%x)ans = max(ans, i+1);
    }
    cout << ans << '\n';
  }
  return 0;
}
