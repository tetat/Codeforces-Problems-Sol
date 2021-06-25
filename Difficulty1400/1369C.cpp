/// Problem Name: RationalLee
/// Problem Link: https://codeforces.com/problemset/problem/1369/C

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
  cin >> tc;
  while (tc--){
    Long n, k;
    cin >> n >> k;
    vector <Long> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    vector <int> w(k);
    for (int i = 0;i < k;i++){
      cin >> w[i];
    }
    Long ans = 0;
    int L = 0;
    int R = n-1;
    sort(a.begin(), a.end());
    sort(w.begin(), w.end());
    int i = 0;
    while (i < k && w[i]==1){
      ans += a[R]*2;
      R--;
      i++;
    }
    for (int j = k-1;j >= i;j--){
      Long mx = a[R];
      Long mn = a[R];
      int tm = w[j]-1;
      while (tm--){
        mn = min(mn, a[L]);
        L++;
      }
      ans += mx+mn;
      R--;
    }
    cout << ans << '\n';
  }
  return 0;
}
