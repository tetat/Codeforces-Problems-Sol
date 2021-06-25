/// Problem Name: Tape
/// Problem Link: https://codeforces.com/problemset/problem/1110/B

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
  int n, m, k;
  cin >> n >> m >> k;
  vector <int> a(n);
  vector <int> b;
  for (int i = 0;i < n;i++){
    cin >> a[i];
    if (i)b.pb(a[i]-a[i-1]-1);
  }
  sort(b.begin(), b.end(), greater<int>());
  int ans = (a[n-1]-a[0])+1;
  for (int i = 0;i < k-1;i++){
    ans -= b[i];
  }
  cout << ans << '\n';
  return 0;
}
