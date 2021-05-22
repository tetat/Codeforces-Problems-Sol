/// Problem Name: Is your horseshoe on the other hoof?
/// Problem Link: https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  set <int> S;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  S.insert(a);
  S.insert(b);
  S.insert(c);
  S.insert(d);
  cout << 4-S.size() << '\n';
  return 0;
}
