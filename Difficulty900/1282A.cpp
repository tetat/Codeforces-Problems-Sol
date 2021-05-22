/// Problem Name: Temporarily unavailable
/// Problem Link: https://codeforces.com/problemset/problem/1282/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long a, b, c, r, L = 0, R = 0;
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    scanf("%lld %lld %lld %lld", &a, &b, &c, &r);
    if (a > b)swap(a, b);
    L = c-r;
    R = c+r;
    if (R < a || L > b)printf("%lld\n", b-a);
    else {
      L = L-a;
      R = b-R;
      if (L<0)L = 0;
      if (R<0)R = 0;
      printf("%lld\n", L+R);
    }
  }
  return 0;
}
