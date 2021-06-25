/// Problem Name: Exam
/// Problem Link: https://codeforces.com/problemset/problem/534/A

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
  int n;
  cin >> n;
  int even = n/2;
  int odd = (n+1)/2;
  if (even < 2){
    even = 0;
    if (n > 1)n--;
  }
  cout << n << '\n';
  for (int i = 2; even-- ;i += 2)cout << i << ' ';
  for (int i = 1; odd-- ;i += 2)cout << i << ' ';
  cout << '\n';
  return 0;
}
