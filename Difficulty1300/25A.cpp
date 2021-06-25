/// Problem Name: IQ test
/// Problem Link: https://codeforces.com/problemset/problem/25/A

#include <bits/stdc++.h>

using namespace std;

int ar[101];

int main()
{
  int n, el, even = 0, odd = 0;
  scanf("%d", &n);
  vector <int> v;
  for (int i = 0;i < n;i++){
    scanf("%d", &el);
    v.push_back(el);
    ar[el]++;
    if (el%2)odd++;
    else even++;
  }
  int e_num, o_num;
  int mne = 101;
  int mno = 101;
  for (int i = 1;i < 101;i++){
    if (ar[i]){
      if (i%2){
        if (mno > ar[i]){
          mno = ar[i];
          o_num = i;
        }
      }
      else {
        if (mne > ar[i]){
          mne = ar[i];
          e_num = i;
        }
      }
    }
  }
  int ans = 0;
  if (even > odd){
    for (int i = 0;i < n;i++){
      if (v[i] == o_num){
        ans = i+1;
        break;
      }
    }
  }
  else if (even < odd){
    for (int i = 0;i < n;i++){
      if (v[i] == e_num){
        ans = i+1;
        break;
      }
    }
  }
  else {
    int mn;
    if (ar[e_num] > ar[o_num]){
      mn = o_num;
    }
    else {
      mn = e_num;
    }
    for (int i = 0;i < n;i++){
      if (v[i] == mn){
        ans = i+1;
        break;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
