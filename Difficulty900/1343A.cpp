/// Problem Name: Candies
/// Problem Link: https://codeforces.com/problemset/problem/1343/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

vector <Long> p;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  //cout << (999999984/3) << '\n';
  while (tc--){
    Long n;
    cin >> n;
    Long ans = 1;
    bool found = false;
    for (Long i = 1;i <= 10000;i++){
      if (n%i==0){
        Long sum = i;
        for (Long j = i*2;sum <= n;j += j){
          if (sum==n){
            found = true;
            ans = i;
            break;
          }
          sum += j;
        }
        if (found==false && i!=1){
          sum = n/i;
          for (Long j = (n/i)*2;sum <= n;j += j){
            if (sum==n){
              found = true;
              ans = n/i;
              break;
            }
            sum += j;
          }
        }
      }
      if (found)break;
    }
    cout << ans << '\n';
  }
  return 0;
}
