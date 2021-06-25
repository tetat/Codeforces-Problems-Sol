/// Problem Name: Number Circle
/// Problem Link: https://codeforces.com/problemset/problem/1189/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  vector <int> ar;
  for (int i = 0;i < n;i+=2)ar.pb(v[i]);
  for (int i = n%2?n-2:n-1;i >= 0;i-=2)ar.pb(v[i]);
  int L = n-1;
  int R = 1;
  bool check = true;
  for (int i = 0;i < n;i++){
    if (ar[i] >= ar[L]+ar[R]){
      check = false;
      break;
    }
    L++;
    R++;
    if (L==n)L = 0;
    if (R==n)R = 0;
  }
  if (check){
    cout << "YES" << '\n';
    for (int i = 0;i < n;i++){
      cout << ar[i];
      if (i != n-1)cout << ' ';
    }cout << '\n';
  }else cout << "NO" << '\n';
  return 0;
}
