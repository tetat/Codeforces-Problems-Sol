/// Problem Name: Drinks
/// Problem Link: https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  double el, sum = 0;
  scanf("%d", &n);
  for (int i = 0;i < n;i++){
    scanf("%lf", &el);
    sum += el;
  }
  printf("%.4lf\n", sum/n);
  return 0;
}
