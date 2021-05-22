/// Problem Name: Happy Birthday, Polycarp!
/// Problem Link: https://codeforces.com/problemset/problem/1277/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    long long n;
    scanf("%lld", &n);
    long long ar[] = {10, 110, 1110, 11110, 111110, 1111110, 11111110, 111111110};
    bool up = false;
    for (long long i = 0;i < 8;i++){
      if (ar[i] == n){
        printf("%lld\n", (i+1)*9);
        up = true;
        break;
      }
    }
    if (up)continue;
    long long ans = 1;
    long long ones = 11;
    while (ones <= n){
      ans += 9;
      ones = (ones*10) + 1;
    }
    ones /= 10;
    long long add = ones;
    ones += add;
    while (ones <= n){
      ans++;
      ones += add;
    }
    printf("%lld\n", ans);
  }
  return 0;
}
