/// Problem Name: Suit and Tie
/// Problem Link: https://codeforces.com/problemset/problem/995/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  n += n;
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    int L = i+1;
    int R = i+1;
    while (R < n && a[i] != a[R])R++;
    if (R-L > 0 && R < n){
      ans += R-L;
      R--;
      while (R >= L){
        swap(a[R], a[R+1]);
        R--;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
