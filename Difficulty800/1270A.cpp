/// Problem Name: Card Game
/// Problem Link: https://codeforces.com/problemset/problem/1270/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int n, k1, k2, el;
    int m1 = 0;
    int m2 = 0;
    scanf("%d %d %d", &n, &k1, &k2);
    for (int i = 0;i < k1;i++){
      scanf("%d", &el);
      m1 = max(m1, el);
    }
    for (int i = 0;i < k2;i++){
      scanf("%d", &el);
      m2 = max(m2, el);
    }
    if (m1 > m2)puts("YES");
    else puts("NO");
  }
  return 0;
}
