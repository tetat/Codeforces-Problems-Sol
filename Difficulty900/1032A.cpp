/// Problem Name: Kitchen Utensils
/// Problem Link: https://codeforces.com/problemset/problem/1032/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <int> mark(101, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el]++;
  }
  int mx = 0;
  int freq = 0;
  for (int i = 1;i <= 100;i++){
    if (mark[i])freq++;
    mx = max(mx, mark[i]);
  }
  int p = ceil(double(mx)/double(k));
  cout << (p*freq*k) -  n << '\n';
  return 0;
}
