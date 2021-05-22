/// Problem Name: Orac and Factors
/// Problem Link: https://codeforces.com/problemset/problem/1350/A

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

const int N = 1e6;

Long fac(Long n){
  Long ret = n;
  for (Long i = 2;i*i <= n;i++){
    if (n%i==0){
      ret = i;
      break;
    }
  }
  return ret;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n, k;
    cin >> n >> k;
    if (n%2==0){
      cout << n+(k+k) << '\n';
    }else {
      n += fac(n);
      k--;
      cout << n+(k+k) << '\n';
    }
  }
  return 0;
}
