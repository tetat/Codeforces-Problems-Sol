/// Problem Name: Dasha and friends
/// Problem Link: https://codeforces.com/problemset/problem/761/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, L, el;
  cin >> n >> L;
  vector <int> m(L, 0);
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
    m[a[i]] = 1;
  }
  vector <int> b(n);
  for (int i = 0;i < n;i++){
    cin >> b[i];
  }
  string ans = "NO";
  for (int i = 0;i < L;i++){
    int ok = 1;
    for (int j = 0;j < n;j++){
      if (m[(i+b[j])%L]==0){
        ok = m[(i+b[j])%L];
        break;
      }
    }
    if (ok){
      ans = "YES";
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
