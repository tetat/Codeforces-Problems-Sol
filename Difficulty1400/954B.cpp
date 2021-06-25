/// Problem Name: String Typing
/// Problem Link: https://codeforces.com/problemset/problem/954/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int ans = n;
  for (int i = 0;i < n/2;i++){
    bool ok = true;
    for (int j = i+1, k = 0;j <= i+i+1;j++, k++){
      if (s[j] != s[k]){
        ok = false;
        break;
      }
    }
    if (ok && i)ans = min(ans, n - i);
  }
  cout << ans << '\n';
  return 0;
}
