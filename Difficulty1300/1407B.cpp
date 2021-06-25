/// Problem Name: Big Vova
/// Problem Link: https://codeforces.com/problemset/problem/1407/B

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
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> ar(n);
    int mx = 0;
    for (int i = 0;i < n;i++){
      cin >> ar[i];
      mx = max(mx, ar[i]);
    }
    int prev = mx;
    for (int i = 0;i < n;i++){
      int id, gc = 0;
      for (int j = 0;j < n;j++){
        if (ar[j] && __gcd(prev, ar[j]) > gc){
          gc = __gcd(prev, ar[j]);
          id = j;
        }
      }
      cout << ar[id] << ' ';
      prev = __gcd(prev, ar[id]);
      ar[id] = 0;
    }cout << '\n';
  }
  return 0;
}
