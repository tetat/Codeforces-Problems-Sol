/// Problem Name: Divisiblity of Differences
/// Problem Link: https://codeforces.com/problemset/problem/876/B

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
  int n, k, m, el;
  cin >> n >> k >> m;
  vector <int> mark[m];
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el%m].pb(el);
  }
  int po = -1;
  for (int i = 0;i < m;i++){
    if (mark[i].size() >= k){
      po = i;
      break;
    }
  }
  if (po==-1)cout << "No" << '\n';
  else {
    cout << "Yes" << '\n';
    for (int i = 0;i < k;i++){
      cout << mark[po][i];
      if (i != k-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
