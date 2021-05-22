/// Problem Name: String Similarity
/// Problem Link: https://codeforces.com/problemset/problem/1400/A

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
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (int i = 0;i < n;i++){
      ans += s[n-1];
    }
    cout << ans << '\n';
  }
  return 0;
}
