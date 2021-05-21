/// Problem Name: Double Cola
/// Problem Link: https://codeforces.com/problemset/problem/82/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, S = 0, st = 1;
  cin >> n;
  while (S < n){
    S += st*5;
    st <<= 1;
  }
  st >>= 1;
  S -= st*5;
  int d = 1;
  while (S+st < n){
    S += st;
    d++;
  }
  string ans;
  if (d==1)ans = "Sheldon";
  if (d==2)ans = "Leonard";
  if (d==3)ans = "Penny";
  if (d==4)ans = "Rajesh";
  if (d==5)ans = "Howard";
  cout << ans << '\n';
  return 0;
}
