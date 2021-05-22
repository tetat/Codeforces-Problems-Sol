/// Problem Name: Kuroni and the Gifts
/// Problem Link: https://codeforces.com/problemset/problem/1305/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool cmp(pair <int, int> a, pair <int, int> b){
  return a.first+a.second < b.first+b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> a;
    vector <int> b;
    for (int i = 0;i < n;i++){
      cin >> el;
      a.pb(el);
    }
    for (int i = 0;i < n;i++){
      cin >> el;
      b.pb(el);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0;i < n;i++){
      cout << a[i];
      if (i != n-1)cout << ' ';
    }cout << '\n';
    for (int i = 0;i < n;i++){
      cout << b[i];
      if (i != n-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
