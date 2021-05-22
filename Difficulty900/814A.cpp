/// Problem Name: An abandoned sentiment from past
/// Problem Link: https://codeforces.com/problemset/problem/814/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  vector <int> a;
  vector <int> b;
  cin >> n >> k;
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(el);
  }
  for (int i = 0;i < k;i++){
    cin >> el;
    b.pb(el);
  }
  sort(b.begin(), b.end(), greater<int>());
  for (int i = 0, j = 0;i < n;i++){
    if (a[i] == 0){
      a[i] = b[j];
      j++;
    }
  }
  bool ans = true;
  for (int i = 1;i < n;i++){
    if (a[i-1] >= a[i]){
      cout << "Yes" << '\n';
      ans = false;
      break;
    }
  }
  if (ans)cout << "No" << '\n';
  return 0;
}
