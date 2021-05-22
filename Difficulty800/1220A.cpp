/// Problem Name: Cards
/// Problem Link: https://codeforces.com/problemset/problem/1220/A

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
  int len;
  string s;
  cin >> len >> s;
  int o = 0;
  int n = 0;
  int e = 0;
  int z =  0;
  int r = 0;
  for (int i = 0;i < len;i++){
    if (s[i] == 'o')o++;
    if (s[i] == 'n')n++;
    if (s[i] == 'e')e++;
    if (s[i] == 'z')z++;
    if (s[i] == 'r')r++;
  }
  int C = min(o, min(n, e));
  o -= C;
  n -= C;
  e -= C;
  for (int i = 0;i < C;i++)cout << "1" << space;
  C = min(z, min(e, min(r, o)));
  for (int i = 0;i < C;i++)cout << "0" << space;
  cout << newline;
  return 0;
}
