/// Problem Name: Reachable Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1157/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 4e3;

set <int> d;
int cnt[2];
bool ok;

void f(int num){
  //static int cnt = 0;
  if (ok)while (num%10==0)num /= 10;
  ok = true;
  //cout << num << ' ';
  d.insert(num);
  if (num==1)return;
  f(num+1);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  f(n);
  for (int i = 1;i < 10;i++)d.insert(i);
  cout << d.size() << '\n';
  return 0;
}
