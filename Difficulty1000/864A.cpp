/// Problem Name: Fair Game
/// Problem Link: https://codeforces.com/problemset/problem/864/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> mark(101, 0);
  cin >> n;
  int ok = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (mark[el] == 0)ok++;
    mark[el]++;
  }
  string ans = "NO";
  int x = 0;
  int y = 0;
  if (ok==2){
    while (mark[x] == 0 && x < 101)x++;
    y = x+1;
    while (mark[y] == 0 && y < 101)y++;
    if (mark[x] == mark[y])ans = "YES";
  }
  if (ans == "NO")cout << ans << '\n';
  else cout << ans << '\n' << x << ' ' << y << '\n';
  return 0;
}
