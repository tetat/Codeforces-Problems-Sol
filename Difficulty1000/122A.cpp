/// Problem Name: Lucky Division
/// Problem Link: https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, len = 14;
  scanf("%d", &n);
  int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  bool ans = false;
  for (int i = 0;i < 14;i++){
    if (n%lucky[i] == 0){
      ans = true;
      break;
    }
  }
  ans?puts("YES"):puts("NO");
  return 0;
}
