/// Problem Name: Anton and Polyhedrons
/// Problem Link: https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  map <string, int> m;
  m["Tetrahedron"] = 4;
  m["Cube"] = 6;
  m["Octahedron"] = 8;
  m["Dodecahedron"] = 12;
  m["Icosahedron"] = 20;
  int t, ca = 0;
  cin >> t;
  int ans = 0;
  while (t--){
    string s;
    cin >> s;
    ans += m[s];
  }
  cout << ans << '\n';
  return 0;
}
