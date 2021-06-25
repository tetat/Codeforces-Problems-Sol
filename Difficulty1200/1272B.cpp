/// Problem Name: Snow Walking Robot
/// Problem Link: https://codeforces.com/problemset/problem/1272/B

#include <bits/stdc++.h>

using namespace std;

int D;
int L = 1;
int U = 2;
int R = 3;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  cin >> t;
  while (t--){
    int path[4] = {0};
    string s, ans;
    cin >> s;
    int len = s.size();
    for (int i = 0;i < len;i++){
      if (s[i] == 'D')path[D]++;
      if (s[i] == 'L')path[L]++;
      if (s[i] == 'U')path[U]++;
      if (s[i] == 'R')path[R]++;
    }
    if (path[D] && path[L] && path[U] && path[R]){
      int DU = min(path[D], path[U]);
      int LR = min(path[L], path[R]);
      for (int i = 0;i < DU;i++)ans += 'D';
      for (int i = 0;i < LR;i++)ans += 'L';
      for (int i = 0;i < DU;i++)ans += 'U';
      for (int i = 0;i < LR;i++)ans += 'R';
    }
    else if (path[D] && path[U]){
      ans += 'D';
      ans += 'U';
    }
    else if (path[L] && path[R]){
      ans += 'L';
      ans += 'R';
    }
    cout << ans.size() << '\n' << ans << '\n';
  }
  return 0;
}
