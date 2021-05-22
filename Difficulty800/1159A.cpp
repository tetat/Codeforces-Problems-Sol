/// Problem Name: A pile of stones
/// Problem Link: https://codeforces.com/problemset/problem/1159/A

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
  string s;
  cin >> n >> s;
  int had = 0;
  int now = 0;
  for (int i = 0;i < n;i++){
    if (s[i]=='-')now--;
    else now++;
    had = min(had, now);
  }
  had = -had;
  now = had;
  for (int i = 0;i < n;i++){
    if (s[i]=='-')now--;
    else now++;
  }
  cout << now << '\n';
  return 0;
}
