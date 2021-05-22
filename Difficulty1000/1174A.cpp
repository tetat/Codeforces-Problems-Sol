/// Problem Name: Ehab Fails to Be Thanos
/// Problem Link: https://codeforces.com/problemset/problem/1174/A

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
  cin >> n;
  n += n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(all(v));
  if (v[0] == v[n-1])cout << "-1" << '\n';
  else {
    for (int i = 0;i < n;i++){
      cout << v[i];
      if (i != n-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
