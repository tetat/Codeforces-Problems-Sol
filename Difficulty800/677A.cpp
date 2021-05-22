/// Problem Name: Vanya and Fence
/// Problem Link: https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, h, el;
  scanf("%d %d", &n, &h);
  int b = 0;
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    if (el > h)b++;
  }
  printf("%d\n", n+b);
  return 0;
}
