/// Problem Name: CME
/// Problem Link: https://codeforces.com/problemset/problem/1223/A

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
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    if (n==2)cout << "2" << newline;
    else if (n%2 == 0)cout << "0" << newline;
    else cout << "1" << newline;
  }
  return 0;
}
