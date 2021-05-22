/// Problem Name: Candies
/// Problem Link: https://codeforces.com/problemset/problem/306/A

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
  int n, m;
  cin >> n >> m;
  int c = n/m;
  int b = n%m;
  while (m && b){
    cout << c+1;
    m--;
    b--;
    if (m)cout << ' ';
  }
  while (m){
    cout << c;
    m--;
    if (m)cout << ' ';
  }cout << '\n';
  return 0;
}
