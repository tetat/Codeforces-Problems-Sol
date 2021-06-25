/// Problem Name: Blocks
/// Problem Link: https://codeforces.com/problemset/problem/1271/B

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

const int N = 100000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  vector <int> v;
  for (int i = 0;i+1 < n;i++){
    if (s[i] == 'W'){
      s[i] = 'B';
      if (s[i+1] == 'W')s[i+1] = 'B';
      else s[i+1] = 'W';
      v.pb(i+1);
    }
  }
  if (s[n-1] != 'B'){
    for (int i = 0;i < n-1;i++){
      if (s[i] == 'B'){
        s[i] = 'W';
        if (s[i+1] == 'W')s[i+1] = 'B';
        else s[i+1] = 'W';
        v.pb(i+1);
      }
    }
  }
  int b = 0;
  int w = 0;
  for (int i = 0;i < n;i++){
    if (s[i] == 'B')b++;
    if (s[i] == 'W')w++;
  }
  if (b && w)cout << "-1" << '\n';
  else {
    int len = v.size();
    cout << len << '\n';
    for (int i = 0;i < len;i++){
      cout << v[i];
      if (i != len-1)cout << " ";
    }cout << '\n';
  }
  return 0;
}
