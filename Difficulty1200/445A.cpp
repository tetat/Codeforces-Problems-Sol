/// Problem Name: DZY Loves Chessboard
/// Problem Link: https://codeforces.com/problemset/problem/445/A

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
  int n, m;
  cin >> n >> m;
  string s[n], ans[n];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (i%2){
        if (j%2)ans[i] += 'B';
        else ans[i] += 'W';
      }
      else {
        if (j%2)ans[i] += 'W';
        else ans[i] += 'B';
      }
      if (s[i][j] == '-')ans[i][j] = '-';
    }
  }
  for (int i = 0;i < n;i++){
    cout << ans[i] << newline;
  }
  return 0;
}
