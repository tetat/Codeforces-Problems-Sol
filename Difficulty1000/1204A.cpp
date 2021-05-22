/// Problem Name: BowWow and the Timetable
/// Problem Link: https://codeforces.com/problemset/problem/1204/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 500;

int main()
{
  faster()
  int t, ca = 0;
  VE <int> v;
  v.pb(0);
  for (int i = 0;i < N;i++){
    v.pb(ca);
    if (i%2)ca++;
  }
  string s;
  cin >> s;
  int one = 0;
  int len = s.size();
  for (int i = 0;i < len;i++){
    if (s[i] == 49)one++;
  }
  int ans = 0;
  if (len==2)ans = 1;
  if (len > 2){
    if (one > 1 || len%2==0)ans = v[len]+1;
    else ans = v[len];
  }
  cout << ans << newline;
  return 0;
}
