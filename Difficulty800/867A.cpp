/// Problem Name: Between the Offices
/// Problem Link: https://codeforces.com/problemset/problem/867/A

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

const int N = 1000;

int main()
{
  faster()
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int s_f = 0;
  int f_s = 0;
  for (int i = 0;i+1 < n;i++){
    if (s[i]=='S' && s[i+1]=='F')s_f++;
    if (s[i]=='F' && s[i+1]=='S')f_s++;
  }
  if (s_f > f_s)cout << "yes" << newline;
  else cout << "no" << newline;
  return 0;
}
