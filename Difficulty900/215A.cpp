/// Problem Name: Bicycle Chain
/// Problem Link: https://codeforces.com/problemset/problem/215/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int n, m, el;
  vector <int> a;
  vector <int> b;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(el);
  }
  cin >> m;
  for (int i = 0;i < m;i++){
    cin >> el;
    b.pb(el);
  }
  vector <int> v;
  for (int i = 0;i < n;i++){
    for (int j = m-1;j >= 0;j--){
      if (b[j] > 0){
        if (b[j]%a[i]==0){
          v.pb(b[j]/a[i]);
          b[j] = 0;
          break;
        }
      }
    }
  }
  sort(v.begin(), v.end());
  int len = v.size();
  int R = len-1;
  int L = len-1;
  int ans = 0;
  while (L >= 0){
    if (v[R]==v[L])ans++;
    L--;
  }
  cout << ans << '\n';
  return 0;
}
