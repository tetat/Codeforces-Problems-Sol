/// Problem Name: Maximum Product
/// Problem Link: https://codeforces.com/problemset/problem/1406/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

Long th = 3000;
Long tot = th*th*th*th*th;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <Long> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    Long ans = - tot;
    if (n < 9){
      for (int i = 0;i < n;i++){
        for (int j = i+1;j < n;j++){
          for (int k = j+1;k < n;k++){
            for (int l = k+1;l < n;l++){
              for (int t = l+1;t < n;t++){
                ans = max(ans, a[i]*a[j]*a[k]*a[l]*a[t]);
              }
            }
          }
        }
      }
    }else {
      int len = 8;
      Long prod = a[n-1] * a[n-2] * a[n-3] * a[n-4] * a[n-5];
      vector <Long> ar;
      if (a[1] < 0){
        ar.pb(a[0]);
        ar.pb(a[1]);
        len -= 2;
      }
      if (a[3] < 0){
        ar.pb(a[2]);
        ar.pb(a[3]);
        len -= 2;
      }
      for (int i = n-1;i >= n-len;i--){
        ar.pb(a[i]);
      }
//      for (int i = 0;i < ar.size();i++){
//        cout << ar[i] << ' ';
//      }cout << '\n';
      for (int i = 0;i < ar.size();i++){
        for (int j = i+1;j < ar.size();j++){
          for (int k = j+1;k < ar.size();k++){
            for (int l = k+1;l < ar.size();l++){
              for (int t = l+1;t < ar.size();t++){
                prod = max(prod, ar[i]*ar[j]*ar[k]*ar[l]*ar[t]);
              }
            }
          }
        }
      }
      ans = max(ans, prod);
    }
    cout << ans << '\n';
  }
  return 0;
}
