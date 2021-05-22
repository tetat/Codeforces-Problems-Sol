/// Problem Name: Beautiful Year
/// Problem Link: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  while (true){
    n++;
    int ar[10] = {0};
    int tmp = n;
    while (tmp){
      ar[tmp%10]++;
      tmp /= 10;
    }
    int b = 0;
    for (int i = 0;i < 10;i++){
      if (ar[i])b++;
    }
    if (b==4)break;
  }
  printf("%d\n", n);
  return 0;
}
