/// Problem Name: Laptops
/// Problem Link: https://codeforces.com/problemset/problem/456/A

#include <bits/stdc++.h>

using namespace std;

struct data {
  int p;
  int q;
  int po;
};

int main()
{
  int n, a, b;
  scanf("%d", &n);
  int ar[n];
  bool ok = false;
  for (int i = 0;i < n;i++){
    scanf("%d %d", &a, &b);
    if (a != b)ok = true;
  }
  if (ok)puts("Happy Alex");
  else puts("Poor Alex");
  return 0;
}
