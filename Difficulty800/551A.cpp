/// Problem Name: GukiZ and Contest
/// Problem Link: https://codeforces.com/problemset/problem/551/A

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

const int N = 2000;
int d[N+1];

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  cin >> n;
  VE <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    d[el]++;
  }
  int po = 1;
  for (int i = N;i > 0;i--){
    int temp = po;
    po += d[i];
    d[i] = temp;
  }
  for (int i = 0;i < n;i++){
    cout << d[v[i]];
    if (i != n-1)cout << space;
  }cout << newline;
  return 0;
}
