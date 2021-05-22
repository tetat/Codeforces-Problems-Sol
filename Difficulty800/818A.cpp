/// Problem Name: Diplomas and Certificates
/// Problem Link: https://codeforces.com/problemset/problem/818/A

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
  Long n , k;
  cin >> n >> k;
  Long d = n/2;
  Long dip = 0;
  Long cer = 0;
  Long nw = 0;
  if (d <= k)nw = n;
  else {
    Long low = 0;
    Long high = (d/k)+10;
    while (low <= high){
      Long mid = low + (high-low)/2;
      Long midk = mid*k;
      if (mid+midk <= d){
        dip = mid;
        cer = midk;
        low = mid+1;
      }else high = mid-1;
    }
    nw = n - (cer+dip);
  }
  cout << dip << ' ' << cer << ' ' << nw << '\n';
  return 0;
}
