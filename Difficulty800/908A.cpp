/// Problem Name: New Year and Counting Cards
/// Problem Link: https://codeforces.com/problemset/problem/908/A

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

const int N = 50;

int main()
{
  faster()
  int t, ca = 0;
  string s;
  cin >> s;
  int len = s.size();
  int ans = 0;
  int v = 0;
  int odd = 0;
  for (int i = 0;i < len;i++){
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')v++;
    if (s[i]>=48 && s[i]<=57 && (s[i]-48)%2)odd++;
  }
  ans = v+odd;
  if (!v && !odd)ans = 0;
  cout << ans << newline;
  return 0;
}
