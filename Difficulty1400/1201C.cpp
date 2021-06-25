/// Problem Name: Maximum Median
/// Problem Link: https://codeforces.com/problemset/problem/1201/C

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
  vector <Long> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  Long cur = v[n/2];
  for (int i = n/2, j = 1;i < n && k;i++, j++){
    if (i < n-1){
      Long d = v[i+1] - cur;
      Long cut = min(k, d*j);
      k -= cut;
      cur = cur+(cut/j);
    }else {
      cur = cur+(k/j);
      k = 0;
    }
  }
  cout << cur << '\n';
  return 0;
}
