/// Problem Name: Two Arrays And Swaps
/// Problem Link: https://codeforces.com/problemset/problem/1353/B

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

const int N = 1e4;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    vector <int> b(n);
    for (int i = 0;i < n;i++){
      cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    for (int i = 0;i < min(n, k);i++){
      if (a[i] < b[i])a[i] = b[i];
    }
    int ans = 0;
    for (int i = 0;i < n;i++){
      ans += a[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
