/// Problem Name: Pillars
/// Problem Link: https://codeforces.com/problemset/problem/1197/B

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
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, el;
  int mx = 0;
  int po = 0;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el > mx){
      mx = el;
      po = i;
    }
    v.pb(el);
  }
  bool ans = true;
  for (int i = po;i > 0;i--){
    if (v[i] < v[i-1]){
      ans = false;
      break;
    }
  }
  for (int i = po;i < n-1;i++){
    if (v[i] < v[i+1]){
      ans = false;
      break;
    }
  }
  if (ans)cout << "yes" << '\n';
  else cout << "no" << '\n';
  return 0;
}
