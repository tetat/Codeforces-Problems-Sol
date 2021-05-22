/// Problem Name: Game With Sticks
/// Problem Link: https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  (min(n, m) % 2)?puts("Akshat"):puts("Malvika");
  return 0;
}
