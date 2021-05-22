/// Problem Name: Grasshopper And the String
/// Problem Link: https://codeforces.com/problemset/problem/733/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
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

const int N = 100;

int main()
{
  faster()
  int t, ca = 0;
  string s;
  cin >> s;
  int mx = 0;
  int cnt = 0;
  for (int i = 0;i < s.size();i++){
    if (s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y')cnt++;
    else {
      mx = max(mx, cnt);
      cnt = 0;
    }
  }
  mx = max(mx, cnt);
  cout << mx+1 << newline;
  return 0;
}
