/// Problem Name: Delete from the Left
/// Problem Link: https://codeforces.com/problemset/problem/1005/B

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

const int N = 1e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s, t;
  cin >> s >> t;
  int ls = s.size();
  int lt = t.size();
  int alive = 0;
  for (int i = ls-1, j = lt-1;i >= 0 && j >= 0;i--, j--){
    if (s[i] != t[j])break;
    alive += 2;
  }
  cout << (ls+lt)-alive << '\n';
  return 0;
}
