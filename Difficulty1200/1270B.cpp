/// Problem Name: Interesting Subarray
/// Problem Link: https://codeforces.com/problemset/problem/1270/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    int n, el;
    scanf("%d", &n);
    vector <int> v;
    for (int i = 0;i < n;i++){
      scanf("%d", &el);
      v.push_back(el);
    }
    bool check = true;
    for (int i = 1;i < n;i++){
      if (abs(v[i]-v[i-1]) > 1){
        printf("yes\n%d %d\n", i, i+1);
        check = false;
        break;
      }
    }
    if (check)printf("no\n");
  }
  return 0;
}
