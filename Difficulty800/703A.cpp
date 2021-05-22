/// Problem Name: Mishka and Game
/// Problem Link: https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, m, c;
  int m_w = 0;
  int c_w = 0;
  cin >> t;
  while (t--){
    cin >> m >> c;
    if (m > c)m_w++;
    if (m < c)c_w++;
  }
  if (m_w > c_w)cout << "Mishka" << '\n';
  else if (m_w < c_w)cout << "Chris" << '\n';
  else cout << "Friendship is magic!^^" << endl;
  return 0;
}
