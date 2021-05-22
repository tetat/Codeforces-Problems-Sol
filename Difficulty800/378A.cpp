/// Problem Name: Playing with Dice
/// Problem Link: https://codeforces.com/problemset/problem/378/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
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

const int N = 100000;

int main()
{
  faster()
  int t, ca = 0;
  int a, b;
  cin >> a >> b;
  int ff = 0;
  int ss = 0;
  int d = 0;
  for (int i = 1;i <= 6;i++){
    if (abs(a-i) < abs(b-i))ff++;
    else if (abs(a-i) > abs(b-i))ss++;
    else d++;
  }
  cout << ff << space << d << space << ss << newline;
  return 0;
}
