/// Problem Name: Squares and Segments
/// Problem Link: https://codeforces.com/problemset/problem/1099/B

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

Long sq(Long n){
  Long low = 0;
  Long high = n;
  Long ret;
  while (low <= high){
    Long mid = low + (high-low)/2;
    if (mid*mid <= n){
      ret = mid;
      low = mid+1;
    }else high = mid-1;
  }
  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n;
  cin >> n;
  Long r = sq(n);
  Long c = ceil(n/double(r));
  cout << r+c << '\n';
  return 0;
}
