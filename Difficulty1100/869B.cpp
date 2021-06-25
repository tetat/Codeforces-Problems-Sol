/// Problem Name: The Eternal Immortality
/// Problem Link: https://codeforces.com/problemset/problem/869/B

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
  Long a, b;
  cin >> a >> b;
  Long ans = 1;
  for (Long i = a+1;i <= b;i++){
    ans = (ans*i) % 10;
    if (ans==0)break;
  }
  cout << ans << '\n';
  return 0;
}
