/// Problem Name: Exams
/// Problem Link: https://codeforces.com/problemset/problem/479/C

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
  int n, a, b;
  cin >> n;
  VE <pair <II> > v;
  for (int i = 0;i < n;i++){
    cin >> a >> b;
    v.pb(mp(a, b));
  }
  sort(all(v));
  int ans = -1;
  for (int i = 0;i < n;i++){
    if (ans <= v[i].second)ans = v[i].second;
    else ans = v[i].first;
  }
  cout << ans << newline;
  return 0;
}
