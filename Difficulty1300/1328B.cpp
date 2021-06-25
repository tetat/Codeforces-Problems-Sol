/// Problem Name: K-th Beautiful String
/// Problem Link: https://codeforces.com/problemset/problem/1328/B

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
  cin >> tc;
  while (tc--){
    int n, k;
    cin >> n >> k;
    int d = 1;
    int it = 0;
    for ( ;d <= k;it++){
      d += it;
    }
    d -= it-1;
    //cout << d << ' ' << it << '\n';
    int sb = k-d;
    string ss;
    ss += 'b';
    for (int i = 2;i < it-sb;i++)ss += 'a';
    ss += 'b';
    for (int i = 0;i < sb;i++)ss += 'a';
    string ff;
    for (int i = 0;i < n-it;i++)ff += 'a';
    cout << ff << ss << '\n';
  }
  return 0;
}
