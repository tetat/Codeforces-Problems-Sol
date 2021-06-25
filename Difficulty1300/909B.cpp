/// Problem Name: Segments
/// Problem Link: https://codeforces.com/problemset/problem/909/B

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
  int n;
  cin >> n;
//  for (int i = 1;i <= n;i++){
//    cout << i << ": " << ((i/2)+1)*((i+1)/2) << '\n';
//  }
  cout << ((n/2)+1)*((n+1)/2) << '\n';
  return 0;
}
