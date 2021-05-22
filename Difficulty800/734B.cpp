/// Problem Name: Anton and Digits
/// Problem Link: https://codeforces.com/problemset/problem/734/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int two, three, five, six;
  scanf("%d %d %d %d", &two, &three, &five, &six);
  long long cuth = min(two, min(five, six));
  two -= cuth;
  long long cutm = min(two, three);
  long long ans = cuth*256 + cutm*32;
  cout << ans << '\n';
  return 0;
}
