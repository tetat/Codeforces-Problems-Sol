/// Problem Name: Flipping Game
/// Problem Link: https://codeforces.com/problemset/problem/327/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  vector <pair <int, int> > m(n+1);
  m[0].first = 0;
  m[0].second = 0;
  int zero = 0;
  int one = 0;
  for (int i = 0;i < n;i++){
    if (!v[i])zero++;
    else one++;
    m[i+1].first = one;
    m[i+1].second = zero;
  }
  int ans = 0;
  for (int i = 1;i <= n;i++){
    int R = i;
    int L = 0;
    while (R <= n){
      ans = max(ans, (one+(m[R].second-m[L].second))-(m[R].first-m[L].first));
      R++;
      L++;
    }
  }
  cout << ans << '\n';
  return 0;
}
