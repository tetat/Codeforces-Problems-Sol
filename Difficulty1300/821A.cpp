/// Problem Name: Okabe and Banana Trees
/// Problem Link: https://codeforces.com/problemset/problem/821/B

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
  Long m, b;
  cin >> m >> b;
  Long ans = 0;
//  for (Long y = b;y >= 0;y--){
//    Long x = m*(b-y);
//    Long t = (x+1)*((y*(y+1))/2) + (y+1)*((x*(x+1))/2);
//    ans = max(ans, t);
//  }
//  for (Long i = 0;i <= b*m;i++){
//    for (Long j = 0;j <= b;j++){
//      double x = i;
//      double y = j;
//      if (y == -x/double(m)+b){
//        cout << i << ' ' << j << ": ";
//        Long t = (i+1)*((j*(j+1))/2) + (j+1)*((i*(i+1))/2);
//        cout << t << '\n';
//        ans = max(ans, t);
//      }
//    }
//  }
  for (Long y = b, x = 0;y >= 0;y--, x += m){
    Long tm = (x+1)*((y*(y+1))/2) + (y+1)*((x*(x+1))/2);
    ans = max(ans, tm);
  }
  cout << ans << '\n';
  return 0;
}
