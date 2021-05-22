/// Problem Name: Display The Number
/// Problem Link: https://codeforces.com/problemset/problem/1295/A

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

const int N = 10000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    string ans;
    if (n%2 == 0){
      n /= 2;
      for (int i = 0;i < n;i++){
        ans += '1';
      }
    }
    else {
      n /= 2;
      n--;
      ans += '7';
      for (int i = 0;i < n;i++){
        ans += '1';
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
