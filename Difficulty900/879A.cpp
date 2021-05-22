/// Problem Name: Borya's Diagnosis
/// Problem Link: https://codeforces.com/problemset/problem/879/A

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
  int n;
  cin >> n;
  vector <pair <int, int> > v;
  for (int i = 0;i < n;i++){
    int a, b;
    cin >> a >> b;
    v.pb(mp(a, b));
  }
  int d = v[0].first;
  for (int i = 1;i < n;i++){
    int low = 0;
    int high = N;
    int nxt = 0;
    while (low <= high){
      int mid = low + (high-low)/2;
      if (d < mid*v[i].second + v[i].first){
        nxt = mid*v[i].second + v[i].first;
        high = mid-1;
      }else low = mid+1;
    }
    d = nxt;
  }
  cout << d << '\n';
  return 0;
}
