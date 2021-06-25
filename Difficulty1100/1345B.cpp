/// Problem Name: Card Constructions
/// Problem Link: https://codeforces.com/problemset/problem/1345/B

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

/// n*(n+1) + ((n*(n-1))/2);

Long find_p(Long n){
  Long L = 1;
  Long R = 100000;
  Long ret = 0;
  while (L <= R){
    Long mid = L + (R-L)/2;
    Long tot = (mid*(mid+1)) + ((mid*(mid-1))/2);
    if (tot <= n){
      ret = tot;
      L = mid+1;
    }else R = mid-1;
  }
  return ret;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n;
    cin >> n;
    Long ans = 0;
    while (find_p(n) > 0){
      ans++;
      n -= find_p(n);
    }
    cout << ans << '\n';
  }
  return 0;
}
