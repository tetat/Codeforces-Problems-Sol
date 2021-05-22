/// Problem Name: Shell Game
/// Problem Link: https://codeforces.com/problemset/problem/777/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  if (k==2){
    if (n%2)n--;
    k -= n%3;
  }
  else if (k==1){
    k -= n%3;
    if (k==-1)k = 2;
  }
  else {
    if (n%2==0)n--;
    n = n%3;
    k = n;
    if (n==0)k = 2;
    if (n==2)k = 0;
  }
  cout << k << '\n';
  return 0;
}
