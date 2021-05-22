/// Problem Name: Array with Odd Sum
/// Problem Link: https://codeforces.com/problemset/problem/1296/A

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
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    int sum = 0;
    int even = 0;
    int odd = 0;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> el;
      sum += el;
      el%2?odd++:even++;
    }
    if (sum%2)cout << "YES" << '\n';
    else {
      if (odd && even)cout << "YES" << '\n';
      else cout << "NO" << '\n';
    }
  }
  return 0;
}
