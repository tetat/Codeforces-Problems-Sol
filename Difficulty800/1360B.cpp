/// Problem Name: Honest Coach
/// Problem Link: https://codeforces.com/problemset/problem/1360/B

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = INT_MAX;
    for (int i = 1;i < n;i++){
      ans = min(ans, v[i]-v[i-1]);
    }
    cout << ans << '\n';
  }
  return 0;
}
