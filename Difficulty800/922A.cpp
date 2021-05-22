/// Problem Name: I'm bored with life
/// Problem Link: https://codeforces.com/problemset/problem/822/A

#include <bits/stdc++.h>

using namespace std;

int fact(int n){
  int ret = 1;
  for (int i = 2;i <= n;i++)ret *= i;
  return ret;
}
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", fact(min(a, b)));
  return 0;
}
