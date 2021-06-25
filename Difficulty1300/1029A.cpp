/// Problem Name: Many Equal Substrings
/// Problem Link: https://codeforces.com/problemset/problem/1029/A

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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  string r;
  int L = 0;
  for (int i = 0;i < n;i++){
    r += s[i];
    int j = i+1;
    int l = 0;
    bool ok = true;
    while (j < n){
      if (s[j] != r[l]){
        ok = false;
        break;
      }
      j++;
      l = (l+1) % (i+1);
      L = l;
    }
    if (ok)break;
  }
  string ans;
  while (--k)ans += r;
  ans += s;
  cout << ans << '\n';
  return 0;
}
