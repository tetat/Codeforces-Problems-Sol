/// Problem Name: Odd Sum Segments
/// Problem Link: https://codeforces.com/problemset/problem/1196/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int q;
  scanf("%d", &q);
  while (q--){
    int n, k;
    scanf("%d %d", &n, &k);
    int odd = 0, len = k-1;
    vector <int> v;
    for (int i = 0;i < n;i++){
      int in;scanf("%d", &in);
      if (in%2){
        odd++;
        if (k>1)v.push_back(i+1),k--;
      }
    }
    if (odd < len+1 || (odd-len)%2==0)printf("NO\n");
    else {
      printf("YES\n");
      for (int i = 0;i < len;i++)printf("%d ", v[i]);
      printf("%d\n", n);
    }
  }
  return 0;
}
