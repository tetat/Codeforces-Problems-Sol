/// Problem Name: Mike and palindrome
/// Problem Link: https://codeforces.com/problemset/problem/798/A

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

const int N = 50;

int main()
{
  faster()
  int t, ca = 0;
  string s;
  cin >> s;
  int len = s.size();
  int cng = 0;
  for (int i = 0, j = len-1;i < len/2;i++, j--){
    if (s[i] != s[j])cng++;
  }
  if (cng == 1 || (cng==0 && len%2))cout << "YES" << newline;
  else cout << "NO" << newline;
  return 0;
}
