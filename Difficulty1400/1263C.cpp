/// Problem Name: Everyone is a Winner!
/// Problem Link: https://codeforces.com/problemset/problem/1263/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  while (t--){
    set <int> S;
    set <int>::iterator it;
    int n;
    scanf("%d", &n);
    for (int i = 1;i*i <= n;i++){
      S.insert(n/i);
      S.insert(i);
    }
    S.insert(0);
    printf("%d\n", S.size());
    for (it = S.begin();it != S.end();it++){
      printf("%d ", *it);
    }puts("");
  }
  return 0;
}
