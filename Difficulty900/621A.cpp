/// Problem Name: Wet Shark and Odd and Even
/// Problem Link: https://codeforces.com/problemset/problem/621/A

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

const int MAXN = 1000;

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  LL sum = 0;
  LL mn_e = INT_MAX;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el%2)mn_e = min(mn_e, (LL)el);
    sum += el;
  }
  if (sum%2)sum -= mn_e;
  cout << sum << newline;
  return 0;
}
