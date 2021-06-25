/// Problem Name: Anastasia and pebbles
/// Problem Link: https://codeforces.com/problemset/problem/789/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <int> v;
  Long sum = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += Long(ceil(double(el) / double(k)));
  }
  cout << Long(ceil(sum/2.0)) << '\n';
  return 0;
}
