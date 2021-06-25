/// Problem Name: High School: Become Human
/// Problem Link: https://codeforces.com/problemset/problem/987/B

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
  Long x, y;
  cin >> x >> y;
  if (x==y)cout << '=' << '\n';
  else if (x==1)cout << '<' << '\n';
  else if (y==1)cout << '>' << '\n';
  else if (x < 5 && y < 5){
    if (pow(x, y) > pow(y, x))cout << '>' << '\n';
    else if (pow(x, y) < pow(y, x))cout << '<' << '\n';
    else cout << '=' << '\n';
  }
  else if (x < y)cout << '>' << '\n';
  else cout << '<' << '\n';
  return 0;
}
