/// Problem Name: Initial Bet
/// Problem Link: https://codeforces.com/problemset/problem/478/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, d, e;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  int sum = a+b+c+d+e;
  printf("%d\n", (sum%5 || !sum)?-1:sum/5);
  return 0;
}
