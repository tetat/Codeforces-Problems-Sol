/// Problem Name: In Search of an Easy Problem
/// Problem Link: https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, d;
  int one = 0;
  scanf("%d", &n);
  while (n--){
    scanf("%d", &d);
    if (d)one++;
  }
  one?puts("hard"):puts("easy");
  return 0;
}
