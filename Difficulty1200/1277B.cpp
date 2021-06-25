/// Problem Name: Make Them Odd
/// Problem Link: https://codeforces.com/problemset/problem/1277/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, ca = 0;
  scanf("%d", &t);
  while (t--){
    map <int, int> m;
    map <int, int>::iterator it;
    int mx = 0;
    int n, in;
    scanf("%d", &n);
    for (int i = 0;i < n;i++){
      scanf("%d", &in);
      if (in%2 == 0){
        if (mx < in)mx = in;
        m[in]++;
      }
    }
    vector <int> v;
    int len = 0;
    for (it = m.begin();it != m.end();it++){
      v.push_back(it->first);
      len++;
    }
    long long one = 1;
    for (int i = 0;i < len;i++){
      long long tmp = v[i];
      tmp = tmp << one;
      while (tmp <= mx){
        if (m[tmp])v[i] = int(tmp);
        tmp = tmp << one;
      }
    }
    m.clear();
    for (int i = 0;i < len;i++){
      m[v[i]]++;
    }
    int ans = 0;
    for (it = m.begin();it != m.end();it++){
      int tmp = it->first;
      while (tmp%2 == 0){
        tmp /= 2;
        ans++;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
