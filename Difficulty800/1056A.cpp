/// Problem Name: Determine Line
/// Problem Link: https://codeforces.com/problemset/problem/1056/A

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
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, st, el;
  cin >> n;
  vector <int> mark(101, 0);
  for (int i = 0;i < n;i++){
    cin >> st;
    for (int j = 0;j < st;j++){
      cin >> el;
      mark[el]++;
    }
  }
  vector <int> v;
  for (int i = 1;i <= 100;i++){
    if (mark[i] == n)v.pb(i);
  }
  int len = v.size();
  for (int i = 0;i < len;i++){
    cout << v[i];
    if (i != len-1)cout << ' ';
  }cout << '\n';
  return 0;
}
