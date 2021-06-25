/// Problem Name: Array Sharpening
/// Problem Link: https://codeforces.com/problemset/problem/1291/B

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
    int n, el;
    cin >> n;
    vector <int> a;
    vector <int> b;
    for (int i = 0;i < n;i++){
      cin >> el;
      a.pb(el);
      //b.pb(el);
    }
    int in = 0;
    int L = 0;
    int R = n-1;
    while (L < n){
      if (a[L] < in){L--;break;}
      L++;
      in++;
    }
    in = 0;
    while (R >= 0){
      if (a[R] < in){R++;break;}
      R--;
      in++;
    }
    if (L < R)cout << "No" << '\n';
    else cout << "Yes" << '\n';
  }
  return 0;
}
