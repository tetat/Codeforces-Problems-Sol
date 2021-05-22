/// Problem Name: Points in Segments
/// Problem Link: https://codeforces.com/problemset/problem/1015/A

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

const int N = 100000;

int main()
{
  faster()
  int t, ca = 0;
  int n, m;
  int x, y;
  cin >> n >> m;
  VE <int> v(m+1, 0);
  for (int i = 0;i < n;i++){
    cin >> x >> y;
    while (x <= y)v[x++]++;
  }
  VE <int> S;
  for (int i = 1;i <= m;i++){
    if (v[i] == 0)S.pb(i);
  }
  cout << S.size() << newline;
  for (int i = 0;i < S.size();i++){
    cout << S[i];
    if (i != S.size()-1)cout << space;
  }
  return 0;
}
