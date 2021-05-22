/// Problem Name: Stages
/// Problem Link: https://codeforces.com/problemset/problem/1011/A

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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  //cout << s << '\n';
  sort(s.begin(), s.end());
  //cout << s << '\n';
  int w = 0;
  int i = 0;
  int j = 0;
  w = (s[0] - 96);k--;
  //cout << w << ' ';
  while (i < n && j < n && k){
    while ((s[j]-96)-(s[i]-96) < 2 && j < n)j++;
    if (j < n)w += (s[j]-96);//cout << (s[j]-96) << ' ';
    i = j;
    if (j < n)k--;
  }//cout << '\n';
  if (k > 0)cout << "-1" << '\n';
  else cout << w << '\n';
  return 0;
}
