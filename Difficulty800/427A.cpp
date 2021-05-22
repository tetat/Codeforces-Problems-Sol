/// Problem Name: Police Recruits
/// Problem Link: https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, el;
  int in_hand = 0;
  int ans = 0;
  scanf("%d", &n);
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    if (el==-1){
      if (in_hand)in_hand--;
      else ans++;
    }
    else in_hand += el;
  }
  printf("%d\n", ans);
  return 0;
}
