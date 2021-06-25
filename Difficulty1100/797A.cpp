/// Problem Name: k-Factorization
/// Problem Link: https://codeforces.com/problemset/problem/797/A

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
  int n, k;
  cin >> n >> k;
  int check = k;
  vector <int> v;
  for (int i = 2;i <= n && k > 1;i++){
    while (n%i==0 && k>1){
      k--;
      v.pb(i);
      n /= i;
    }
  }
  if (n > 1)v.pb(n);
  int len = v.size();
  if (len != check)len = -1;
  if (len==-1)cout << len << '\n';
  for (int i = 0;i < len;i++){
    cout << v[i];
    if (i != len-1)cout << ' ';
  }if (len>0)cout << '\n';
  return 0;
}
