/// Problem Name: Colorful Stones (Simplified Edition)
/// Problem Link: https://codeforces.com/problemset/problem/265/A

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

const int N = 1000;

int main()
{
  faster()
  int t, ca = 0;
  string a, b;
  cin >> a >> b;
  //int len_a = a.size();
  int len_b = b.size();
  int ans = 0;
  for (int i = 0;i < len_b;i++){
    if (a[ans]==b[i])ans++;
  }
  cout << ans+1 << newline;
  return 0;
}
