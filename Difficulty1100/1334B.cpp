/// Problem Name: Middle Class
/// Problem Link: https://codeforces.com/problemset/problem/1334/B

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
  cin >> tc;
  while (tc--){
    int n, x;
    double el;
    cin >> n >> x;
    vector <double> v;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    sort(v.begin(), v.end(), greater<double>());
    double d = 1;
    double sum = 0;
    int ans = 0;
    for (int i = 0;i < n;i++){
      sum += v[i];
      if ((sum/d)>=x)ans++;
      d++;
    }
    cout << ans << '\n';
  }
  return 0;
}
