/// Problem Name: Insomnia cure
/// Problem Link: https://codeforces.com/problemset/problem/148/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  set <int> S;
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int cnt = k;
  while (cnt <= d){
    S.insert(cnt);
    cnt += k;
  }
  cnt = l;
  while (cnt <= d){
    S.insert(cnt);
    cnt += l;
  }
  cnt = m;
  while (cnt <= d){
    S.insert(cnt);
    cnt += m;
  }
  cnt = n;
  while (cnt <= d){
    S.insert(cnt);
    cnt += n;
  }
  cout << S.size() << '\n';
  return 0;
}
