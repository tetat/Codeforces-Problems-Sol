/// Problem Name: Vanya and Cards
/// Problem Link: https://codeforces.com/problemset/problem/401/A

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
  int t, ca = 0;
  int n, x, el;
  int sum = 0;
  cin >> n >> x;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
  }
  int ans = 0;
  sum = abs(sum);
  if (sum <= x && sum)ans = 1;
  else {
    ans += sum/x;
    if (sum%x)ans++;
  }
  cout << ans << '\n';
  return 0;
}
