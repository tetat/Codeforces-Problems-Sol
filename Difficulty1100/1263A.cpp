/// Problem Name: Sweet Problem
/// Problem Link: https://codeforces.com/problemset/problem/1263/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)swap(a, b);
    if (a < c)swap(a, c);
    printf("%d\n", (a+b+c)/2 < b+c?(a+b+c)/2:b+c);
  }
  return 0;
}
