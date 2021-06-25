/// Problem Name: K-special Tables
/// Problem Link: https://codeforces.com/problemset/problem/625/C

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  int L = 1;
  int R = n*(k-1)+1;
  vector <int> v[n];
  for (int i = 0;i < n;i++){
    for (int j = 1;j <= n;j++){
      if (j < k){
        v[i].pb(L);
        L++;
      }else {
        v[i].pb(R);
        R++;
      }
    }
  }
  int sum = 0;
  for (int i = 0;i < n;i++){
    sum += v[i][k-1];
  }
  cout << sum << '\n';
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      cout << v[i][j] << ' ';
    }cout << '\n';
  }
  return 0;
}
