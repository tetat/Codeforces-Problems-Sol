/// Problem Name: Remove Smallest
/// Problem Link: https://codeforces.com/problemset/problem/1399/A

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
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    string ans = "YES";
    for (int i = 1;i < n;i++){
      if (v[i]-v[i-1] > 1){
        ans = "NO";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
