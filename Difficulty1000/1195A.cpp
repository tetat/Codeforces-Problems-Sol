/// Problem Name: Drinks Choosing
/// Problem Link: https://codeforces.com/problemset/problem/1195/A

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
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <int> mark(k+1, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el]++;
  }
  vector <int> v;
  for (int i = 0;i < k;i++){
    if (mark[i+1])v.pb(mark[i+1]);
  }
  //sort(v.begin(), v.end());
  int len = v.size();
  int ans = n;
  int left = (n+1)/2;
  sort(v.begin(), v.end(), greater<int>());
  for (int i = 0;i < len && left>0 && ans>0;i++){
    int d = v[i]/2;
    v[i] -= d*2;
    left -= d;
    ans -= d*2;
  }
  if (left>0 && ans>0){
    for (int i = 0;i < len && left>0 && ans>0;i++){
      if (v[i]){
        v[i] = 0;
        left--;
        ans--;
      }
    }
  }
  cout << n-ans << '\n';
  return 0;
}
