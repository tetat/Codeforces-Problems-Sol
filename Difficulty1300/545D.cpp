/// Problem Name: Queue
/// Problem Link: https://codeforces.com/problemset/problem/545/D

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

const int N = 10;

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  VE <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(all(v));
  LL sum = 0;
  int d = 0;
  for (int i = 0;i < n;i++){
    if (sum > (LL)(v[i]))d++;
    else sum += (LL)(v[i]);
  }
  cout << n - d << newline;
  return 0;
}
