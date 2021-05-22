/// Problem Name: Arya and Bran
/// Problem Link: https://codeforces.com/problemset/problem/839/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <int> v;
  int sum = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el+sum <= 8){
      v.pb(el+sum);
      sum = 0;
    }
    else {
      v.pb(8);
      sum += el-8;
    }
  }
  //v[n-1] += sum;
  int ans = 0;
  for (int i = 0;i < n && k;i++){
    k -= v[i];
    if (k <= 0){
      ans = i+1;
      k = 0;
    }
  }
  if (k>0)cout << "-1" << '\n';
  else cout << ans << '\n';
  return 0;
}
