/// Problem Name: k-th divisor
/// Problem Link: https://codeforces.com/problemset/problem/762/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n, k;
  cin >> n >> k;
  vector <Long> v;
  for (Long i = 1;i*i <= n;i++){
    if (n%i==0){
      if (i*i == n)v.pb(i);
      else {v.pb(i);v.pb(n/i);}
    }
  }
  if (v.size() < k)cout << "-1" << '\n';
  else {
    sort(v.begin(), v.end());
    cout << v[k-1] << '\n';
  }
  return 0;
}
