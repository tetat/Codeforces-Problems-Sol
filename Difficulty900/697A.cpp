/// Problem Name: Pineapple Incident
/// Problem Link: https://codeforces.com/problemset/problem/697/A

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
  Long t, s, x;
  cin >> t >> s >> x;
  Long low = 0;
  Long high = Long(1e9);
//  if (x==t)cout << "YES" << '\n';
//  else {
    bool ok = true;
    while (low <= high){
      Long mid = low + (high-low)/2;
//      if (mid == 0)break;
      if (mid*s+t == x){
        cout << "YES" << '\n';
        ok = false;
        break;
      }
      else if (mid && mid*s+t+1 == x){
        cout << "YES" << '\n';
        ok = false;
        break;
      }
      else if (mid*s+t > x)high = mid-1;
      else low = mid+1;
    }
    if (ok)cout << "NO" << '\n';
  //}
  return 0;
}
