/// Problem Name: Book Reading
/// Problem Link: https://codeforces.com/problemset/problem/1213/C

#include <bits/stdc++.h>

using namespace std;

#define lol long long

int main()
{
  int t;
  scanf("%d", &t);
  while (t--){
    lol n, m;
    scanf("%I64d %I64d", &n, &m);
    lol cnt[10];
    lol a[10];
    lol x = m;
    for (lol i = 0;i < 11;i++){
      cnt[i] = 0;
    }
    for (lol i = 1;i <= 10 && x <= n;i++){
      cnt[x%10]++;
      x += m;
    }
    lol len = 0;
    for (lol i = 0;i < 10;i++){
      if (cnt[i]){a[len] = i;len++;}
    }
    if (!len){
      puts("0");
      continue;
    }
    lol d = (n/m)/len;
    lol l = (n/m)%len;
    lol ans = 0;
    for (lol i = 0;i < len;i++){
      ans += (a[i]*d);
    }
    x = m;
    while (l--){
      ans += x%10;
      x += m;
    }
    printf("%I64d\n", ans);
  }
  return 0;
}
 
