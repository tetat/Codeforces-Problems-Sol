/// Problem Name: Pasha and Stick
/// Problem Link: https://codeforces.com/problemset/problem/610/A

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
  int n;
  cin >> n;
  int ans = 0;
  if (n%2 == 0){
    int ft = 1;
    int td = (n-(2))/2;
    ans = ((td-ft)+1)/2;
  }
  cout << ans << '\n';
  return 0;
}
