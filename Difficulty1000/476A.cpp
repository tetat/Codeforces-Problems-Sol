/// Problem Name: Dreamoon and Stairs
/// Problem Link: https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  if (n < m){
    cout << "-1" << '\n';
    return 0;
  }
  if (n == m){
    cout << m << '\n';
    return 0;
  }
  int d = n/2;
  if (n%2)d++;
  if (d%m == 0){
    cout << d << '\n';
    return 0;
  }
  int t = n/2;
  while (t--){
    d++;
    if (d%m == 0){
      cout << d << '\n';
      return 0;
    }
  }
  cout << "-1" << '\n';
  return 0;
}
