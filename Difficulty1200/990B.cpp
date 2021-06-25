/// Problem Name: Micro-World
/// Problem Link: https://codeforces.com/problemset/problem/990/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  int mn = N;
  int mx = 0;
  vector <int> mark(N+1, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el]++;
    mn = min(mn, el);
    mx = max(mx, el);
  }
  int i = mn;
  while (i <= mx){
    while (i <= mx && mark[i]==0)i++;
    int j = i+1;
    while (j <= mx && mark[j]==0)j++;
    while (mark[i] && j-i <= k && j <= mx){
      mark[i]--;
      n--;
    }
    i++;
  }
  cout << n << '\n';
  return 0;
}
