/// Problem Name: Chloe and the sequence
/// Problem Link: https://codeforces.com/problemset/problem/743/B

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
  Long n, k;
  cin >> n >> k;
  if (k%2)cout << "1" << '\n';
  else {
    for (Long i = 2;i <= 50;i++){
      Long m = 1;
      for (int j = 1;j <= i;j++){
        m <<= 1;
      }
      Long kt = k-(m/2);
      if (kt % m == 0){
        cout << i << '\n';
        break;
      }
    }
  }
  return 0;
}
