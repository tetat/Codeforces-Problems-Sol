/// Problem Name: Choose Two Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1206/A

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
  int n, m, el;
  cin >> n;
  int a = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    a = max(a, el);
  }
  cin >> m;
  int b = 0;
  for (int i = 0;i < m;i++){
    cin >> el;
    b = max(b, el);
  }
  cout << a << space << b << newline;
  return 0;
}
