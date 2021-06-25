/// Problem Name: Kitahara Haruki's Gift
/// Problem Link: https://codeforces.com/problemset/problem/433/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  int one_h = 0;
  int two_h = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    (el==100)?one_h++:two_h++;
  }
  if ((one_h%2==0 && one_h) || (two_h%2==0 && one_h==0))cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
