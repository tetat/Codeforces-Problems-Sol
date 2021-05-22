/// Problem Name: Lunch Rush
/// Problem Link: https://codeforces.com/problemset/problem/276/A

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
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 100;

int main()
{
  faster()
  int t, ca = 0;
  int n, k;
  int a, b;
  cin >> n >> k;
  int mx = -1000000001;
  for (int i = 0;i < n;i++){
    cin >> a >> b;
    if (b > k)mx = max(mx, a - (b-k));
    else mx = max(mx, a);
  }
  cout << mx << newline;
  return 0;
}
