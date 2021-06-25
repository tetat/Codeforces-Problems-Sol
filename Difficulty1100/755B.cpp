/// Problem Name: PolandBall and Game
/// Problem Link: https://codeforces.com/problemset/problem/755/B

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
  int n, m;
  cin >> n >> m;
  string s[n];
  string t[m];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  for (int i = 0;i < m;i++){
    cin >> t[i];
  }
  int com = 0;
  for (int i = 0;i < n;i++){
    int low = 0;
    int high = m-1;
    while (low <= high){
      int mid = low + (high-low)/2;
      if (s[i] > t[mid])low = mid+1;
      else if (s[i] < t[mid])high = mid-1;
      else {com++;break;}
    }
  }
  n -= com;
  m -= com;
  bool ans = true;
  if (com%2){
    if (n < m)ans = false;
  }
  else {
    if (n <= m)ans = false;
  }
  if (ans)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
