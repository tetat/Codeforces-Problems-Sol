/// Problem Name: Three Garlands
/// Problem Link: https://codeforces.com/problemset/problem/911/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int a, b, c;
  cin >> a >> b >> c;
  int one = 0;
  int two = 0;
  int three = 0;
  int four = 0;

  if (a==1)one++;
  if (b==1)one++;
  if (c==1)one++;

  if (a==2)two++;
  if (b==2)two++;
  if (c==2)two++;

  if (a==3)three++;
  if (b==3)three++;
  if (c==3)three++;

  if (a==4)four++;
  if (b==4)four++;
  if (c==4)four++;

  if (one || two > 1 || three > 2 || (two==1 && four==2))cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
