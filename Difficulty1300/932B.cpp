/// Problem Name: Recursive Queries
/// Problem Link: https://codeforces.com/problemset/problem/932/B

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

Long g(Long n){
  if (n < 10)return n;
  Long r = 1;
  while (n){
    if (n%10){
      r *= n%10;
    }
    n /= 10;
  }
  return g(r);
}

int ar[N+1][10];

int main()
{
  FastIO();
  int tc, ca = 0;
  for (Long i = 1;i <= N;i++){
    ar[i][g(i)]++;
    for (int j = 1;j < 10;j++){
      ar[i][j] += ar[i-1][j];
    }
  }
  cin >> tc;
  while (tc--){
    Long l, r, k;
    cin >> l >> r >> k;
    cout << ar[r][k] - ar[l-1][k] << '\n';
  }
  return 0;
}
