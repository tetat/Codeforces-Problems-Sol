/// Problem Name: Sport Mafia
/// Problem Link: https://codeforces.com/problemset/problem/1195/B

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

const int N = 1e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, k;
  cin >> n >> k;
  Long low = 0;
  Long high = n;
  Long ans = 0;
  while (low <= high){
    Long mid = low + (high-low)/2;
    Long sum = (mid*(mid+1))/2;
    if (sum >= k){
      if (sum-k+mid < n)low = mid+1;
      else if (sum-k+mid > n)high = mid-1;
      else {ans = sum-k;break;}
    }
    else low = mid+1;
  }
  cout << ans << '\n';
  return 0;
}
