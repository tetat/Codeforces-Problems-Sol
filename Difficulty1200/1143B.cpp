/// Problem Name: Nirvana
/// Problem Link: https://codeforces.com/problemset/problem/1143/B

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
  Long n;
  cin >> n;
  Long tm = n;
  Long st = 0;
  Long ten = 1;
  while (tm > 9){
    st = (st*10)+9;
    tm /= 10;
    ten *= 10;
  }
  if (n>9)ten /= 10;
  Long ans = 0;
  //cout << ten << '\n';
  for ( ;st <= n;st += ten){
    tm = st;
    Long m = 1;
    while (tm){
      m *= (tm%10);
      tm /= 10;
    }
    //cout << st << '\n';
    ans = max(ans, m);
    if (n-st < ten && ten>9)ten /= 10;
  }
  cout << ans << '\n';
  return 0;
}
