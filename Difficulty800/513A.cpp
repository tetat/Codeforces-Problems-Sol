/// Problem Name: Game
/// Problem Link: https://codeforces.com/problemset/problem/513/A

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
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int ff = ceil(n/double(a));
  int ss = ceil(m/double(b));
  if (n > m)cout << "First" << newline;
  else cout << "Second" << newline;
  return 0;
}
