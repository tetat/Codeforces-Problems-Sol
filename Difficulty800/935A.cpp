/// Problem Name: Fafa and his Company
/// Problem Link: https://codeforces.com/problemset/problem/935/A

#include <bits/stdc++.h>

using namespace std;

int factors(int n){
  int ret = 1;
  for (int i = 2;i*i <= n;i++){
    if (n%i == 0){
      if (i*i == n)ret++;
      else ret += 2;
    }
  }
  return ret;
}

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", factors(n));
}
