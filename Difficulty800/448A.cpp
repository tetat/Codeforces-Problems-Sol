/// Problem Name: Rewards
/// Problem Link: https://codeforces.com/problemset/problem/448/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a1, a2, a3;
  int b1, b2, b3;
  int n;
  scanf("%d %d %d", &a1, &a2, &a3);
  scanf("%d %d %d", &b1, &b2, &b3);
  scanf("%d", &n);
  int c = ceil((a1+a2+a3)/5.0);
  int m = ceil((b1+b2+b3)/10.0);
  if (c+m <= n)puts("YES");
  else puts("NO");
  return 0;
}
