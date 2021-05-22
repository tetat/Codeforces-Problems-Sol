/// Problem Name: XORinacci
/// Problem Link: https://codeforces.com/problemset/problem/1208/A

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

const int N = 500;

int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    int a, b, n;
    cin >> a >> b >> n;
    int ar[3];
    ar[0] = a;
    ar[1] = b;
    ar[2] = a^b;
    cout << ar[n%3] << newline;
  }
  return 0;
}
