/// Problem Name: Alex and a Rhombus
/// Problem Link: https://codeforces.com/problemset/problem/1180/A

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
  int n, cell = 1;
  int add = 0;
  cin >> n;
  for (int i = 2;i <= n;i++){
    add += 4;
    cell += add;
  }
  cout << cell << newline;
  return 0;
}
