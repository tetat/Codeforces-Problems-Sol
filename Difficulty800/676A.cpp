/// Problem Name: Nicholas and Permutation
/// Problem Link: https://codeforces.com/problemset/problem/676/A

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
  int n, el;
  cin >> n;
  int mn = 101;
  int mx = 0;
  int mnp, mxp;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (mn > el){
      mn = el;
      mnp = i;
    }
    if (mx < el){
      mx = el;
      mxp = i;
    }
  }
  cout << (max(abs(mxp-0), max(abs((n-1)-mxp), max(mnp-0, (n-1)- mnp)))) << '\n';
  return 0;
}
