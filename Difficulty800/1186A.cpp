/// Problem Name: Vus the Cossack and a Contest
/// Problem Link: https://codeforces.com/problemset/problem/1186/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  a<=min(b,c)?puts("yes"):puts("NO");
  return 0;
}
