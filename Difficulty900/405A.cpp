/// Problem Name: Gravity Flip
/// Problem Link: https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, el;
  vector <int> v;
  scanf("%d", &n);
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    v.push_back(el);
  }
  for (int i = 0;i < n-1;i++){
    for (int j = 0;j < n-i-1;j++){
      if (v[j] > v[j+1]){
        int temp = v[j];
        v[j] = v[j+1];
        v[j+1] = temp;
      }
    }
  }
  for (int i = 0;i < n;i++){
    printf("%d", v[i]);
    if (i != n-1)printf(" ");
  }
  return 0;
}
