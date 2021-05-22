/// Problem Name: Sale
/// Problem Link: https://codeforces.com/problemset/problem/34/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
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
  int n, d, el;
  cin >> n >> d;
  VE <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el < 0)v.pb(el);
  }
  sort(all(v));
  int ans = 0;
  n = v.size();
  for (int i = 0;i < min(n, d);i++){
    ans += v[i];
  }
  cout << -ans << newline;
  return 0;
}
