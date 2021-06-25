/// Problem Name: Save the problem!
/// Problem Link: https://codeforces.com/problemset/problem/865/A

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  int w;
  cin >> w;
  int n = w==1?w:(w-1)+(w-1);
  int c = n==1?n:2;
  cout << n << ' ' << c << '\n';
  for (int i = 1;i <= c;i++){
    cout << i << ' ';
  }cout << '\n';
  return 0;
}
