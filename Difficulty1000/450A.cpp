/// Problem Name: Jzzhu and Children
/// Problem Link: https://codeforces.com/problemset/problem/450/A

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

const int N = 10000;

int main()
{
  faster()
  int t, ca = 0;
  int n, m, el;
  cin >> n >> m;
  VE <int> v;
  queue <int> q;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    q.push(i+1);
  }
  int po = 0;
  while (!q.empty()){
    po = q.front();
    q.pop();
    v[po-1] -= m;
    if (v[po-1] > 0)q.push(po);
  }
  cout << po << newline;
  return 0;
}
