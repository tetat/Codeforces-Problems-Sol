/// Problem Name: Balanced Array
/// Problem Link: https://codeforces.com/problemset/problem/1343/B

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
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    string s = "YES";
    if ((n/2)%2)s = "NO";
    cout << s << '\n';
    if (s=="YES"){
      int even_sum = 0;
      int even = n/2;
      for (int i = 2; even-- ;i += 2){
        cout << i << ' ';
        even_sum += i;
      }
      int odd = n/2;
      int odd_sum = 0;
      for (int i = 1; odd > 1 ;i += 2){
        cout << i << ' ';
        odd_sum += i;
        odd--;
      }
      cout << even_sum-odd_sum << '\n';
    }
  }
  return 0;
}
