/// Problem Name: Maximum Number
/// Problem Link: https://codeforces.com/problemset/problem/774/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int dig[] = {0, 0, 1, 7, 4, 5, 9, 8};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  string num;
  if (n%2==0){
    while (n){
      num += '1';
      n-=2;
    }
  }
  else {
    num += '7';
    n -= 3;
    while (n){
      num += '1';
      n -= 2;
    }
  }
  cout << num << '\n';
  return 0;
}
