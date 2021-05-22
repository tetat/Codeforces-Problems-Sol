/// Problem Name: Jeff and Digits
/// Problem Link: https://codeforces.com/problemset/problem/352/A

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
  int n, el;
  cin >> n;
  int five = 0;
  int zero = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    el==0?zero++:five++;
  }
  five -= (five%9);
  string ans;
  for (int i = 0;i < five;i++)ans += '5';
  if (five==0 && zero)zero = 1;
  for (int i = 0;i < zero;i++)ans += '0';
  if (zero==0)ans = "-1";
  cout << ans << '\n';
  return 0;
}
