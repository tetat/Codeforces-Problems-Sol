/// Problem Name: Non-zero
/// Problem Link: https://codeforces.com/problemset/problem/1300/A

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

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    vector <int> v;
    cin >> n;
    int st = 0;
    int sum = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
      if (v[i]==0){
        v[i]++;
        st++;
      }
      sum += v[i];
    }
    if (sum == 0){
      v[0]++;
      st++;
    }
    cout << st << '\n';
  }
  return 0;
}
