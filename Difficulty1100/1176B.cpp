/// Problem Name: Merge it!
/// Problem Link: https://codeforces.com/problemset/problem/1176/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> mark(3, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      mark[el%3]++;
    }
    int mn = min(mark[1], mark[2]);
    mark[1] -= mn;
    mark[2] -= mn;
    int ans = mn+mark[0]+(mark[1]/3)+(mark[2]/3);
    cout << ans << '\n';
  }
  return 0;
}
