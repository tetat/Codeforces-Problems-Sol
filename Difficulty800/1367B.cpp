/// Problem Name: Even Array
/// Problem Link: https://codeforces.com/problemset/problem/1367/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

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
    int tot_odd = 0;
    int tot_even = 0;
    int odd = 0;
    int even = 0;
    int d_odd = 0;
    int d_even = 0;
    for (int i = 0;i < n;i++){
      cin >> v[i];
      if (i%2)tot_odd++;
      else tot_even++;
      if (v[i]%2)odd++;
      else even++;
      if (i%2 != v[i]%2){
        if (i%2)d_odd++;
        else d_even++;
      }
    }
    if (tot_odd != odd || tot_even != even)cout << "-1" << '\n';
    else cout << min(d_odd, d_even) << '\n';
  }
  return 0;
}
