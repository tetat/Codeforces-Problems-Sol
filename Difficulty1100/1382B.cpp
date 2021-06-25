/// Problem Name: Sequential Nim
/// Problem Link: https://codeforces.com/problemset/problem/1382/B

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
    int one = 0;
    for (int i = 0;i < n-1;i++){
      if (v[i]==1)one++;
      else break;
    }
    if (one%2)cout << "Second" << '\n';
    else cout << "First" << '\n';
  }
  return 0;
}
