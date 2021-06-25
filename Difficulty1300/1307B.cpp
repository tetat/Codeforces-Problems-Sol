/// Problem Name: Cow and Friend
/// Problem Link: https://codeforces.com/problemset/problem/1307/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n, x, el;
    Long sum = 0;
    cin >> n >> x;
    vector <Long> v;
    vector <Long> st;
    Long mx = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
      mx = max(mx, el);
      if (x%el==0)st.pb(x/el);
    }
    if (x%mx){
      if (x/mx==0)st.pb(2);
      else st.pb(x/mx+1);
    }
    sort(all(st));
    cout << st[0] << '\n';
  }
  return 0;
}
