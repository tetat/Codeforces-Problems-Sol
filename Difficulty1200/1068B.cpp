/// Problem Name: LCM
/// Problem Link: https://codeforces.com/problemset/problem/1068/B

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
  Long n;
  cin >> n;
  vector <Long> v;
  for (Long i = 1;i*i <= n;i++){
    if (n%i==0){
      if (i*i==n)v.pb(i);
      else {
        v.pb(i);
        v.pb(n/i);
      }
    }
  }
  cout << int(v.size()) << '\n';
  return 0;
}
