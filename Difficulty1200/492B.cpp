/// Problem Name: Vanya and Lanterns
/// Problem Link: https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, L;
  vector <double> v;
  scanf("%d %d", &n, &L);
  for (int i = 0;i < n;i++){
    double el;
    scanf("%lf", &el);
    v.push_back(el);
  }
  sort(v.begin(), v.end());
//  for (int i = 0;i < n;i++){
//    printf("%.0lf ", v[i]);
//  }puts("");
  double ans = max(v[0]-0, L-v[n-1]);
  for (int i = 1;i < n;i++){
    double d = v[i]-v[i-1];
    //printf("%lf ", d);
    ans = max(ans, d/2.0);
  }//puts("");
  printf("%.9lf\n", ans);
  return 0;
}
