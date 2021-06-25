/// Problem Name: Omkar and Last Class of Math
/// Problem Link: https://codeforces.com/problemset/problem/1372/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n;
    cin >> n;
    Long f = 1;
    for (Long i = 2;i*i <= n;i++){
      if (n%i==0){
        f = i;
        break;
      }
    }
    if (f==1){
      cout << f << ' ' << n-f << '\n';
    }else {
      f = n/f;
      cout << f << ' ' << n-f << '\n';
    }
  }
  return 0;
}
