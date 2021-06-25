/// Problem Name: Game With Array
/// Problem Link: https://codeforces.com/problemset/problem/1355/D

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, s;
  cin >> n >> s;
  int S = s;
  vector <int> a(n);
  vector <int> m(s+1, 0);
  for (int i = 0;i < n;i++){
    if (i != n-1){
      a[i] = 1;
      s--;
    }else a[i] = s;
  }
  int sum = 0;
  for (int i = 0;i < n;i++){
    sum += a[i];
    m[sum]++;
    if (sum+s <= S)m[sum+s]++;
  }
  string ans = "NO";
  int k = -1;
  for (int i = 1;i <= S;i++){
    if (!m[i] && !m[S-i]){
      ans = "YES";
      k = i;
      break;
    }
  }
  cout << ans << '\n';
  if (k != -1){
    for (int i = 0;i < n;i++){
      cout << a[i] << ' ';
    }cout << '\n';
    cout << k << '\n';
  }
  return 0;
}
