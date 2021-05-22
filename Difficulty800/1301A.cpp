/// Problem Name: Three Strings
/// Problem Link: https://codeforces.com/problemset/problem/1301/A

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
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string a, b, c;
    cin >> a >> b >> c;
    int len = a.size();
    bool check = true;
    for (int i = 0;i < len;i++){
      set <char> S;
      S.insert(a[i]);
      S.insert(b[i]);
      S.insert(c[i]);
      if (S.size() == 3 || (S.size()==2 && a[i]==b[i])){
        check = false;
        break;
      }
    }
    if (check)cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
