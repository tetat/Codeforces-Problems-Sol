/// Problem Name: Balanced Tunnel
/// Problem Link: https://codeforces.com/problemset/problem/1237/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define stp setprecision
#define set_pnt(pnt) cout<<fixed<<stp(pnt);
const double pi = acos(-1.0);

const int N = 2e5;
int mark_in[N+1];
int mark_out[N+1];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> in;
  vector <int> out;
  for (int i = 0;i < n;i++){
    cin >> el;
    mark_in[el] = 1;
    in.pb(el);
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    mark_out[el] = 1;
    out.pb(el);
  }
  int ans = 0;
  int i = 0;
  int j = 0;
  while (i < n && j < n){
    if (mark_in[in[i]] && mark_out[out[j]]){
      if (in[i] != out[j]){
        mark_in[out[j]] = 0;
        mark_out[out[j]] = 0;
        ans++;
        j++;
      }
      else {
        mark_in[in[i]] = 0;
        mark_out[out[j]] = 0;
        i++;
        j++;
      }
    }
    else i++;
  }
  cout << ans << '\n';
  return 0;
}
