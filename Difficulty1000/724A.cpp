/// Problem Name: Checking the Calendar
/// Problem Link: https://codeforces.com/problemset/problem/724/A

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
  string weekdays[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
  string a, b;
  cin >> a >> b;
  int i = 0;
  while (a != weekdays[i])i++;
  int d = 0;
  int j = i;
  while (b != weekdays[j]){
    d++;
    j++;
    j = j%7;
  }
  if (d == 2 || d == 0 || d == 3)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
