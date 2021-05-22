/// Problem Name: Collecting Coins
/// Problem Link: https://codeforces.com/problemset/problem/1294/A

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
  cin >> t;
  while (t--){
    VE <int> v;
    int in;
    for (int i = 0;i < 4;i++){
      cin >> in;
      v.pb(in);
    }
    sort(v.begin(), v.begin()+3);
    v[3] -= (v[2]-v[1]);
    v[3] -= (v[2]-v[0]);
//    for (int i = 0;i < 4;i++){
//      cout << v[i] << space;
//    }cout << newline;
    if (v[3]%3 == 0 && v[3]>=0)cout << "YES" << newline;
    else cout << "NO" << newline;
  }
  return 0;
}
