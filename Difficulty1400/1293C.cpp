/// Problem Name: NEKO's Maze Game
/// Problem Link: https://codeforces.com/contest/1293/problem/C

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

const int N = 200000;
bool block[2][N+1];

int main()
{
  faster()
  int t, ca = 0;
  int n, q, ans = 0;
  cin >> n >> q;
  while (q--){
    int R, C;
    cin >> R >> C;
    R--;
    if (block[R][C] == false){
      block[R][C] = true;
      if (R)R = 0;
      else R = 1;
      if (block[R][C-1])ans++;
      if (block[R][C])ans++;
      if (block[R][C+1])ans++;
    }
    else {
      block[R][C] = false;
      if (R)R = 0;
      else R = 1;
      if (block[R][C-1])ans--;
      if (block[R][C])ans--;
      if (block[R][C+1])ans--;
    }
    if (ans < 1)cout << "yes" << newline;
    else cout << "no" << newline;
  }
  return 0;
}
