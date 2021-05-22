/// Problem Name: Bachgold Problem
/// Problem Link: https://codeforces.com/problemset/problem/749/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;
  cin >> n;
  k = n/2;
  cout << k << '\n';
  if (n%2){
    //cout << k << '\n';
    while (--k)cout << 2 << " ";
    cout << 3 << '\n';
  }
  else {
    while (k--)cout << 2 << " ";
    cout << '\n';
  }
  return 0;
}
