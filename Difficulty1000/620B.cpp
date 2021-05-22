/// Problem Name: Grandfather Dovlet’s calculator
/// Problem Link: https://codeforces.com/problemset/problem/620/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int ds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for ( ;a <= b;a++){
    int tmp = a;
    while (tmp){
      ans += ds[tmp%10];
      tmp /= 10;
    }
  }
  cout << ans << '\n';
  return 0;
}
