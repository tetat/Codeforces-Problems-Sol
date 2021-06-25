/// Problem Name: Chat
/// Problem Link: https://codeforces.com/problemset/problem/928/B

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
  int n, k;
  cin >> n >> k;
  vector <int> a(n+1, 0);
  for (int i = 1;i <= n;i++){
    cin >> a[i];
  }
  a[1] = min(n, k+1);
  cout << a[1] << ' ';
  for (int i = 2;i <= n;i++){
    int L = i - max(1, i-k);
    int R = min(n, i+k) - i;
    if (a[i]){
      int prev = a[i];
      int cur = min(min(n, i+k) - min(n, a[i]+k), L+R+1);
      a[i] = min(a[a[i]]+cur, n);
    }else a[i] = L+R+1;
    cout << a[i] << ' ';
  }cout << '\n';
  return 0;
}
