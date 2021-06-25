/// Problem Name: Counterexample
/// Problem Link: https://codeforces.com/problemset/problem/483/A

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
  Long L, R;
  cin >> L >> R;
  vector <Long> v;
  for (L%2?L++:L;L <= R && v.size() < 3;L++){
    v.pb(L);
  }
  if (v.size() < 3){
    v.clear();
    v.pb(-1);
  }
  for (int i = 0;i < v.size();i++){
    cout << v[i] << ' ';
  }cout << '\n';
  return 0;
}
