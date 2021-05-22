/// Problem Name: Shaass and Oskols
/// Problem Link: https://codeforces.com/problemset/problem/294/A

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
  int n, el;
  cin >> n;
  vector <int> v(n+1, 0);
  for (int i = 1;i <= n;i++){
    cin >> v[i];
  }
  int q, w, p;
  cin >> q;
  while (q--){
    cin >> w >> p;
    if (w-1 >= 1){
      v[w-1] += p-1;
    }
    if (w+1 <= n){
      v[w+1] += v[w]-p;
    }
    v[w] = 0;
  }
  for (int i = 1;i <= n;i++){
    cout << v[i] << '\n';
  }
  return 0;
}
