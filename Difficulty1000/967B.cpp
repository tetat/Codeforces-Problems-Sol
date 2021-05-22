/// Problem Name: Watering System
/// Problem Link: https://codeforces.com/problemset/problem/967/B

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
  int n, A, B;
  cin >> n >> A >> B;
  vector <int> v;
  int S = 0;
  int el;
  for (int i = 0;i < n;i++){
    cin >> el;
    S += el;
    v.pb(el);
  }
  if (n > 1)sort(v.begin()+1, v.end());
  int ans = 0;
  double d = v[0]*A;
  for (int i = n-1;i > 0;i--){
    //cout << (d/S) << " " << B << '\n';
    if ((d/S) < B){
      S -= v[i];
      ans++;
    }else break;
  }
  cout << ans << '\n';
  return 0;
}
