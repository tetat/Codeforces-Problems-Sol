/// Problem Name: Suits
/// Problem Link: https://codeforces.com/problemset/problem/1271/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, d, e, f;
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

  int A = a;
  int B = b;
  int C = c;
  int D = d;

  int ans1 = 0;
  int mn = min(a, d);
  ans1 += mn*e;
  d -= mn;
  mn = min(b, min(c, d));
  ans1 += mn*f;

  int ans2 = 0;
  mn = min(B, min(C, D));
  ans2 += mn*f;
  D -= mn;
  mn = min(A, D);
  ans2 += mn*e;
  //printf("%d %d\n", ans1, ans2);
  printf("%d\n", ans1>ans2?ans1:ans2);

  return 0;
}
