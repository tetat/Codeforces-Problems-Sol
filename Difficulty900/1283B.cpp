/// Problem Name: Candies Division
/// Problem Link: https://codeforces.com/problemset/problem/1283/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int n, k;
    scanf("%d %d", &n, &k);
    int ans = (n/k)*k;
    n -= ans;
    ans += min(n, k/2);
    printf("%d\n", ans);
  }
  return 0;
}
