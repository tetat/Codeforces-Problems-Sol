/// Problem Name: Kill 'Em All
/// Problem Link: https://codeforces.com/problemset/problem/1238/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define stp setprecision
#define set_pnt(pnt) cout<<fixed<<stp(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, r, el;
    cin >> n >> r;
    int mx = 0;
    set <int> v;
    set <int>::iterator it;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.insert(el);
    }
    int L = 0;
    int R = n-1;
    int missiles = 0;
    n = v.size();
    it = v.end();
    it--;
    for (int i = 0;L < *it && i < n;it--, L += r, i++)missiles++;
    cout << missiles << '\n';
  }
  return 0;
}
