/// Problem Name: New Year Transportation
/// Problem Link: https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, t, el;
  scanf("%d %d", &n, &t);
  vector <int> v(n+1, 0);
  for (int i = 1;i < n;i++){
    scanf("%d", &v[i]);
  }
//  for (int i = 1;i <= n;i++){
//    printf("%d ", v[i]);
//  }puts("");
  v[n] = 30001;
  int i = 1;
  while (i <= n){
    if (i == t){
      puts("YES");
      return 0;
    }
    //printf("%d\n", i);
    i += v[i];
  }
  puts("NO");
  return 0;
}
