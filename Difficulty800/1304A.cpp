/// Problem Name: Two Rabbits
/// Problem Link: https://codeforces.com/problemset/problem/1304/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long x, y, a, b;
    cin >> x >> y >> a >> b;
    Long L = 0;
    Long R = y;
    Long mid;
    Long in;
    Long de;
    while (L <= R){
      mid = (L+R)/2;
      in = mid*a;
      de = mid*b;
      if (x+in < y-de)L = mid+1;
      else if (x+in > y-de)R = mid-1;
      else break;
    }
    if (x+in != y-de)mid = -1;
    cout << mid << '\n';
  }
  return 0;
}
