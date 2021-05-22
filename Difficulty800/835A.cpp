/// Problem Name: Key races
/// Problem Link: https://codeforces.com/problemset/problem/835/A

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
  int s, v1, v2, t1, t2;
  cin >> s >> v1 >> v2 >> t1 >> t2;
  if (s*v1+t1+t1 < s*v2+t2+t2)cout << "First" << newline;
  else if (s*v1+t1+t1 > s*v2+t2+t2)cout << "Second" << newline;
  else cout << "Friendship" << newline;
  return 0;
}
