/// Problem Name: Food Buying
/// Problem Link: https://codeforces.com/problemset/problem/1296/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define stp setprecision
#define set_pnt(pnt) cout<<fixed<<stp(pnt);
const double pi = acos(-1.0);

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, num = 0;
    cin >> n;
    num += (n/9)*10;
    num += n%9;
    if (n%9 == 0)num--;
    cout << num << '\n';
  }
  return 0;
}
