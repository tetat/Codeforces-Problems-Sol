/// Problem Name: Increase and Decrease
/// Problem Link: https://codeforces.com/problemset/problem/246/B

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
  int n, el;
  cin >> n;
  int sum = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
  }
  if (sum%n)cout << n-1 << '\n';
  else cout << n << '\n';
  return 0;
}
