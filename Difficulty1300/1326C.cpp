/// Problem Name: Permutation Partitions
/// Problem Link: https://codeforces.com/problemset/problem/1326/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <pair <int, int> > v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i+1));
  }
  sort(v.begin(), v.end());
  vector <Long> p;
  Long mxsum = 0;
  for (int i = n-1, j = 0;i >= 0 && j < k;i--, j++){
    mxsum += v[i].first;
    p.pb(Long(v[i].second));
  }
  sort(p.begin(), p.end());
  Long way = 1;
  if (k>1){
    Long mod = 998244353;
//    if (p[0]!=1)way = p[0]-1;
//    if (p[k-1]!=n){
//      p.pb(n);
//      k++;
//    }
    for (int i = 1;i < k;i++){
      way = (way*(p[i]-p[i-1])) % mod;
    }
  }
  cout << mxsum << ' ' << way << '\n';
  return 0;
}
