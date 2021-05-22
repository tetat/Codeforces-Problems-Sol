/// Problem Name: Ilya and Bank Account
/// Problem Link: https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  if (n > -10 && n < 10)printf("%d\n", n);
  else if (n<0){
    int d = n%10;
    int ss = n/10;
    int ff = ss/10;
    ff = (ff*10)+d;
    printf("%d\n", max(ff, ss));
  }
  else printf("%d\n", n);
  return 0;
}
