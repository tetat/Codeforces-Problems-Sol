/// Problem Name: Balloons
/// Problem Link: https://codeforces.com/problemset/problem/998/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  cin >> n;
  int mn = INT_MAX;
  int po = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    if (mn > el){
      mn = el;
      po = i+1;
    }
  }
  if (n==1 || (n==2 && v[0]==v[1]))cout << "-1" << '\n';
  else cout << "1\n" << po << '\n';
  return 0;
}
