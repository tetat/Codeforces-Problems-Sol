/// Problem Name: Free Ice Cream
/// Problem Link: https://codeforces.com/problemset/problem/686/A

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
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  LL n, x, tot = 0;
  cin >> n >> x;
  tot += x;
  int dis = 0;
  string s;
  LL d;
  for (int i = 0;i < n;i++){
    cin >> s >> d;
    if (s == "+")tot += d;
    else {
      if (tot-d < 0)dis++;
      else tot -= d;
    }
  }
  cout << tot << space << dis << newline;
  return 0;
}
