/// Problem Name: BerSU Ball
/// Problem Link: https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>

using namespace std;

const int len = 100;
int a[len+2];
int b[len+2];
int n, m, el;

int main()
{
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    a[el]++;
  }
  cin >> m;
  for (int i = 0;i < m;i++){
    cin >> el;
    b[el]++;
  }
  int ans = 0;
  for (int i = 1;i <= len;i++){
    int cut = min(a[i], b[i]);
    ans += cut;
    a[i] -= cut;
    b[i] -= cut;

    cut = min(a[i], b[i+1]);
    ans += cut;
    a[i] -= cut;
    b[i+1] -= cut;
    cut = min(a[i], b[i-1]);
    ans += cut;
    a[i] -= cut;
    b[i-1] -= cut;

    cut = min(a[i+1], b[i]);
    ans += cut;
    a[i+1] -= cut;
    b[i] -= cut;
    cut = min(a[i-1], b[i]);
    ans += cut;
    a[i-1] -= cut;
    b[i] -= cut;
  }
  cout << ans << endl;
  return 0;
}
