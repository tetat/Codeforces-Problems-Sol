/// Problem Name: Bulbs
/// Problem Link: https://codeforces.com/problemset/problem/615/A

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
  int n, m, el, b;
  cin >> n >> m;
  VE <int> v(m+1, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    for (int j = 0;j < el;j++){
      cin >> b;
      v[b]++;
    }
  }
  for (int i = 1;i <= m;i++){
    if (v[i] == 0){
      cout << "NO" << newline;
      return 0;
    }
  }
  cout << "YES" << newline;
  return 0;
}
