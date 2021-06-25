/// Problem Name: Rank List
/// Problem Link: https://codeforces.com/problemset/problem/166/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

class data {
  public:
  int p;
  int t;
};

bool cmp_p(data a, data b){
  return a.p > b.p;
}

bool cmp_t(data a, data b){
  return a.t < b.t;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  data table[n];
  for (int i = 0;i < n;i++){
    cin >> table[i].p >> table[i].t;
  }
  sort(table, table+n, cmp_p);
  int i = 0;
  int j = 0;
  while (j < n){
    while (table[i].p==table[j].p && j < n)j++;
    sort(table+i, table+j, cmp_t);
    i = j;
  }
  int ans = 0;
  i = k-1;
  j = k-1;
  while (table[i].p==table[j].p && table[i].t==table[j].t && j < n){
    j++;
    ans++;
  }
  j = i-1;
  while (table[i].p==table[j].p && table[i].t==table[j].t && j >= 0){
    j--;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
