/// Problem Name: Is it rated?
/// Problem Link: https://codeforces.com/problemset/problem/807/A

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

/// 1200

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <pair <int, int> > a(n);
  int d = 0;
  for (int i = 0;i < n;i++){
    cin >> a[i].first >> a[i].second;
    if (a[i].first != a[i].second)d++;
  }
  if (d)cout << "rated" << '\n';
  else {
    bool in = true;
    bool de = true;
//    for (int i = 1;i < n;i++){
//      if (a[i-1].first > a[i].first){
//        in = false;
//        break;
//      }
//    }
    for (int i = 1;i < n;i++){
      if (a[i-1].first < a[i].first){
        de = false;
        break;
      }
    }
    if (de)cout << "maybe" << '\n';
    else cout << "unrated" << '\n';
  }
  return 0;
}
