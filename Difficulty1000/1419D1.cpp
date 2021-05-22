/// Problem Name: Sage's Birthday (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1419/D1

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
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector <int> ans(n);
  int half = n/2;
  int I = 0;
  for (int i = 1; half-- ;i += 2){
    ans[i] = a[I];
    I++;
  }
  for (int i = 0;i < n;i += 2){
    ans[i] = a[I];
    I++;
  }
  int tot = (n-1)/2;
  cout << tot << '\n';
  for (int i = 0;i < n;i++){
    cout << ans[i] << ' ';
  }cout << '\n';
  return 0;
}
