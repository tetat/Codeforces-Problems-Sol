/// Problem Name: Subtractions
/// Problem Link: https://codeforces.com/problemset/problem/267/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a && b){
      ans += a/b;
      a = a%b;
      if (a==0 || b==0)break;
      ans += b/a;
      b = b%a;
    }
    cout << ans << '\n';
  }
  return 0;
}
