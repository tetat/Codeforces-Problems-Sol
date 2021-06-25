/// Problem Name: Non-Coprime Partition
/// Problem Link: https://codeforces.com/problemset/problem/1038/B

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
  if (n < 3)cout << "No" << '\n';
  else {
    vector <int> a, b;
    int sum = (n*(n+1))/2;
    for (int i = 2;i <= n;i++){
      if (sum%i==0){
        a.pb(i);
        break;
      }
    }
    for (int i = 1;i <= n;i++){
      if (i != a[0])b.pb(i);
    }
    cout << "Yes" << '\n';
    cout << 1 << ' ' << a[0] << '\n';
    cout << n-1;
    for (int i = 1;i < n;i++){
      cout << ' ' << b[i-1];
    }cout << '\n';
  }
  return 0;
}
