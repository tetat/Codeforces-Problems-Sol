/// Problem Name: Fence
/// Problem Link: https://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>

using namespace std;

struct data {
  int h;
  int s;
};
data ar[150010];

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 1;i-1 < n;i++){
    scanf("%d", &ar[i].h);
    ar[i].s = ar[i].h + ar[i-1].s;
  }
  int ans = 0;
  int sum = ar[k].s;
  for (int i = k+1;i-1 < n;i++){
    int temp = ar[i].s - ar[i-k].s;
    if (sum > temp){
      sum = temp;
      ans = i-k;
    }
  }
  printf("%d\n", ans+1);
  return 0;
}
