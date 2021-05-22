/// Problem Name: Tanya and Stairways
/// Problem Link: https://codeforces.com/problemset/problem/1005/A

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
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int MAXN = 1;

int main()
{
  faster()
  int t, ca = 0;
  int n, el, prev = 0;
  cin >> n;
  VE <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (i)if (el == 1)v.pb(prev);
    prev = el;
  }
  v.pb(el);
  n = v.size();
  cout << n << newline;
  for (int i = 0;i < n;i++){
    cout << v[i];
    if (i != n-1)cout << space;
  }cout << newline;
  return 0;
}
