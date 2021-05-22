/// Problem Name: Angry Students
/// Problem Link: https://codeforces.com/problemset/problem/1287/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  cin >> t;
  while (t--){
    int n;
    string s;
    cin >> n >> s;
    int mx = 0;
    int cnt = 0;
    int i = 0;
    while (s[i]=='P')i++;
    for ( ;i < n;i++){
      if (s[i] == 'P')cnt++;
      else {
        mx = max(mx, cnt);
        cnt = 0;
      }
    }
    cout << max(mx, cnt) << '\n';
  }
  return 0;
}
