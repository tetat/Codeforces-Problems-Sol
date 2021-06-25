/// Problem Name: Chocolate
/// Problem Link: https://codeforces.com/problemset/problem/617/B

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

const int N = 1e3;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  int L = 0;
  int R = n-1;
  while (L < n && v[L]==0)L++;
  while (R >= 0 && v[R]==0)R--;
  Long ans = 1;
  if (L > R)ans = 0;
  while (L <= R){
    Long one = 0;
    while (L <= R && v[L]==1){
      one++;
      L++;
    }
    Long zero = 1;
    while (L <= R && v[L]==0){
      zero++;
      L++;
    }
    ans *= zero;
  }
  cout << ans << '\n';
  return 0;
}
