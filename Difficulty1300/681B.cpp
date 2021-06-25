/// Problem Name: Economy Game
/// Problem Link: https://codeforces.com/problemset/problem/681/B

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

Long cost[] = {1234567, 123456, 1234};

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n;
  cin >> n;
  string ans = "NO";
  for (Long i = 0;i <= 810;i++){
    for (Long j = 0;j <= 8100;j++){
      Long tm = i*cost[0] + j*cost[1];
      if (n >= tm){
        if ((n-tm)%cost[2] == 0){
          ans = "YES";
          break;
        }
      }
    }
    if (ans=="YES")break;
  }
  cout << ans << '\n';
  return 0;
}
