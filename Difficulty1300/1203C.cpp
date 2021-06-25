/// Problem Name: Common Divisors
/// Problem Link: https://codeforces.com/problemset/problem/1203/C

#include <bits/stdc++.h>

using namespace std;

#define lol long long

int common_divisors(lol n)
{
  int ret = 0;
  lol sq = sqrt(n);
  for (lol i = 1;i <= sq;i++){
    if (n%i == 0){
      (i*i!=n)?ret += 2:ret += 1;
    }
  }
  return ret;
}

int main()
{
	lol n;
	scanf("%I64d", &n);
	lol gc;
	scanf("%I64d", &gc);
	for (int i = 1;i < n;i++){
    lol in;
    scanf("%I64d", &in);
    gc = __gcd(gc, in);
	}
	printf("%d\n", common_divisors(gc));
	return 0;
}
