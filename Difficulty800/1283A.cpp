/// Problem Name: Minutes Before the New Year
/// Problem Link: https://codeforces.com/problemset/problem/1283/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d\n", (24*60)-(h*60+m));
  }
  return 0;
}
