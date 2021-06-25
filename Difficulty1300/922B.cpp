/// Problem Name: Magic Forest
/// Problem Link: https://codeforces.com/problemset/problem/922/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1;i <= n;i++){
    for (int j = i;j <= n;j++){
      for (int k = j;k <= n;k++){
        if ((i^j^k) == 0){
          double a = i;
          double b = j;
          double c = k;
          double m = (a+b+c)/2;
          if (sqrt(m*(m-a)*(m-b)*(m-c)) > 0)ans++;
        }
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
