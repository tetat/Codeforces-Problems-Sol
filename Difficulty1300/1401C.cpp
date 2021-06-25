/// Problem Name: Mere Array
/// Problem Link: https://codeforces.com/problemset/problem/1401/C

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
    vector <pair <int, int> > a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i].first;
      a[i].second = i;
    }
    sort(a.begin(), a.end());
    int mn = a[0].first;
    string ans = "YES";
    for (int i = 0;i < n;i++){
      if (a[i].second != i && a[i].first%mn){
        ans = "NO";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
