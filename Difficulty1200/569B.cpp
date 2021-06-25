/// Problem Name: Inventory
/// Problem Link: https://codeforces.com/problemset/problem/569/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

vector <int> mark(N+1, 0);

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
    mark[v[i]]++;
  }
  int c = 1;
  for (int i = 0;i < n;i++){
    if (mark[v[i]] > 1 || v[i]>n){
      while (mark[c])c++;
      mark[v[i]]--;
      mark[c]++;
      v[i] = c;
    }
  }
  char sn = ' ';
  for (int i = 0;i < n;i++){
    if (i == n-1)sn = '\n';
    cout << v[i] << sn;
  }
  return 0;
}
