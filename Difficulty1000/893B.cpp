/// Problem Name: Beautiful Divisors
/// Problem Link: https://codeforces.com/problemset/problem/893/B

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
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 1;i*i <= n;i++){
    if (n%i == 0){
      v.pb(n/i);
      v.pb(i);
    }
  }
  sort(v.begin(), v.end());
  int len = v.size();
  for (int i = len-1;i >= 0;i--){
    int d = v[i];
    string b;
    while (d){
      b += (d%2)+48;
      d /= 2;
    }
    int zero = 0;
    int one = 0;
    int l = b.size();
    int j = 0;
    while (b[j] == '0' && j < l){
      zero++;
      j++;
    }
    while (b[j] == '1' && j < l){
      one++;
      j++;
    }
    if (zero+one == l && one-zero == 1){
      cout << v[i] << '\n';
      break;
    }
  }
  return 0;
}
