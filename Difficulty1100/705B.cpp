/// Problem Name: Spider Man
/// Problem Link: https://codeforces.com/problemset/problem/705/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  Long check = 0;
  vector <int> a;
  for (int i = 0;i < n;i++){
    cin >> el;
    check += el-1;
    if (check%2)a.pb(1);
    else a.pb(2);
  }
  for (int i = 0;i < n;i++){
    cout << a[i] << '\n';
  }
  return 0;
}
