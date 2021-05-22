/// Problem Name: Straight «A»
/// Problem Link: https://codeforces.com/problemset/problem/810/A

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
  double k;
  double sum = 0;
  double el;
  cin >> n >> k;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
  }
  int ans = 0;
  while (sum/n < k-.5){
    sum += k;
    n++;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
