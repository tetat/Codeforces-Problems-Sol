/// Problem Name: K-th Not Divisible by n
/// Problem Link: https://codeforces.com/problemset/problem/1352/C

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n, k;
    cin >> n >> k;
    cout << (k-1)/(n-1) + k << '\n';
  }
  return 0;
}
