/// Problem Name: Tricky Sum
/// Problem Link: https://codeforces.com/problemset/problem/598/A

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
  cin >> t;
  while (t--){
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;
    ll power_of_two = 1;
    while (power_of_two <= n){
      sum -= (power_of_two*2);
      power_of_two *= 2;
    }
    cout << sum << newline;
  }
  return 0;
}
