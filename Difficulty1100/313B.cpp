/// Problem Name: Ilya and Queries
/// Problem Link: https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  vector <int> v(n+10, 0);
  int sum = 0;
  for (int i = 1;i < n;i++){
    if (s[i] == s[i-1])sum++;
    v[i] = sum;
  }
//  for (int i = 0;i < n;i++){
//    cout << v[i] << " ";
//  }cout << endl;
  int q, l, r;
  cin >> q;
  while (q--){
    scanf("%d %d", &l, &r);
    printf("%d\n", v[r-1]-v[l-1]);
  }
  return 0;
}
