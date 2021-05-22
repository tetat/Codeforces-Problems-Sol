/// Problem Name: Suffix Three
/// Problem Link: https://codeforces.com/problemset/problem/1281/A

#include <bits/stdc++.h>

using namespace std;

string F = "FILIPINO";
string J = "JAPANESE";
string K = "KOREAN";

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    char ch = s[s.size()-1];
    if (ch == 'o')cout << F << '\n';
    else if (ch == 'u')cout << J << '\n';
    else cout << K << '\n';
  }
  return 0;
}
