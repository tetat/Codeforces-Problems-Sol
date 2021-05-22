/// Problem Name: Arrays
/// Problem Link: https://codeforces.com/problemset/problem/572/A

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

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  int na, nb, el;
  cin >> na >> nb;
  vector <int> a, b;
  int k, m;
  cin >> k >> m;
  for (int i = 0;i < na;i++){
    cin >> el;
    a.pb(el);
  }
  for (int i = 0;i < nb;i++){
    cin >> el;
    b.pb(el);
  }
  sort(all(a));
  sort(all(b));
  if (a[k-1] < b[nb-m])cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
