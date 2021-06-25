/// Problem Name: Space Formula
/// Problem Link: https://codeforces.com/problemset/problem/1046/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n, d;
  cin >> n >> d;
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  vector <int> b(n);
  for (int i = 0;i < n;i++){
    cin >> b[i];
  }
  int ans = d;
  for (int i = d-2, j = 1;i >= 0;i--){
    while (j < n){
      if (a[i]+b[j] <= a[d-1]+b[0]){
        ans = min(ans, i+1);
        j++;
        break;
      }else j++;
    }
  }
  cout << ans << '\n';
  return 0;
}
