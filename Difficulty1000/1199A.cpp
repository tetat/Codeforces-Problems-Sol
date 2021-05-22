/// Problem Name: City Day
/// Problem Link: https://codeforces.com/problemset/problem/1199/A

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
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, x, y, el;
  cin >> n >> x >> y;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  for (int i = 0;i < n;i++){
    int L = i-x;
    int R = i+y;
    if (L < 0)L = 0;
    if (R >= n)R = n-1;
    bool check = true;
    for (int j = L;j <= R;j++){
      if (i != j){
        if (v[i] >= v[j]){
          check = false;
          break;
        }
      }
    }
    if (check){
      cout << i+1 << '\n';
      return 0;
    }
  }
  return 0;
}
