/// Problem Name: Easy Number Challenge
/// Problem Link: https://codeforces.com/problemset/problem/236/B

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

vector <int> d(N+1);

int fac(int n){
  if (d[n])return d[n];
  int cnt = 0;
  for (int i = 1;i*i <= n;i++){
    if (n%i==0){
      if (i*i == n)cnt++;
      else cnt += 2;
    }
  }
  d[n] = cnt;
  return d[n];
}

int m = 1073741824;

int main()
{
  FastIO();
  int tc, ca = 0;
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  for (int i = 1;i <= a;i++){
    for (int j = 1;j <= b;j++){
      for (int k = 1;k <= c;k++){
        ans = (ans+fac(i*j*k)) % m;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
