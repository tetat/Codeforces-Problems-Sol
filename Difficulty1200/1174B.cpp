/// Problem Name: Ehab Is an Odd Person
/// Problem Link: https://codeforces.com/problemset/problem/1174/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

struct data {
  int num;
};

bool cmp(data a, data b){
  return a.num < b.num;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  data ar[n];
  int odd = 0;
  for (int i = 0;i < n;i++){
    cin >> ar[i].num;
    if (ar[i].num%2)odd++;
  }
  if (odd!=0 && odd!=n) sort(ar, ar+n, cmp);
  for (int i = 0;i < n;i++){
    cout << ar[i].num;
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
