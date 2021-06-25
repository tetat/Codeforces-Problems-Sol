/// Problem Name: Worms
/// Problem Link: https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, q, el;
  scanf("%d", &n);
  vector <int> sum(n+10, 0);
  for (int i = 1;i <= n;i++){
    scanf("%d", &sum[i]);
    sum[i] += sum[i-1];
  }
  scanf("%d", &q);
  while (q--){
    scanf("%d", &el);
    int L = 1;
    int R = n;
    while (L <= R){
      int mid = (L+R)/2;
      if (sum[mid-1] >= el)R = mid-1;
      else if (sum[mid] < el)L = mid+1;
      else {
        printf("%d\n", mid);
        L = n+1;
      }
    }
  }
  return 0;
}
