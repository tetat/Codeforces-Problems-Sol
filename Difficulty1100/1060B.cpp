/// Problem Name: Maximum Sum of Digits
/// Problem Link: https://codeforces.com/problemset/problem/1060/B

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
  Long n, tmp;
  cin >> n;
  tmp = n;
  Long a = 0;
  while (tmp > 9){
    a = (a*10) + 9;
    tmp /= 10;
  }
  Long b = n-a;
  Long sum = 0;
  //cout << a << ' ' << b << '\n' << a+b << '\n';
  while (a){
    sum += (a%10);
    a /= 10;
  }
  while (b){
    sum += (b%10);
    b /= 10;
  }
  cout << sum << '\n';
  return 0;
}
