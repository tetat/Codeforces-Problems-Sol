/// Problem Name: Lecture
/// Problem Link: https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  map <string, string> mp;
  string a, b;
  for (int i = 0;i < m;i++){
    cin >> a >> b;
    mp[a] = b;
  }
  for (int i = 0;i < n;i++){
    cin >> a;
    b = mp[a];
    if (a.size() > b.size())cout << b;
    else cout << a;
    if (i != n-1)cout << " ";
  }cout << '\n';
  return 0;
}
