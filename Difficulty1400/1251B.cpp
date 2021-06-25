/// Problem Name: Binary Palindromes
/// Problem Link: https://codeforces.com/problemset/problem/1251/B

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

struct data {
  int zero;
  int one;
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    data ps[n];
    for (int i = 0;i < n;i++){
      string s;
      cin >> s;
      int len = s.size();
      int z = 0;
      int o = 0;
      for (int j = 0;j < len;j++){
        if (s[j] == 48)z++;
        if (s[j] == 49)o++;
      }
      //cout << z << " " << o << '\n';
      ps[i].zero = z;
      ps[i].one = o;
    }
    for (int i = 0;i < n;i++){
      int a = ps[i].zero;
      int b = ps[i].one;
      if (a%2 && b%2){
        for (int j = 0;j < n;j++){
          if (i != j){
            int c = ps[j].zero;
            int d = ps[j].one;
            if (c%2 || d%2){
              if (c < d){
                c++;a--;
                d--;b++;
              }
              else {
                c--;a++;
                d++;b--;
              }
              ps[i].zero = a;
              ps[i].one = b;
              ps[j].zero = c;
              ps[j].one = d;
              break;
            }
          }
        }
      }
    }
    int ans = 0;
    for (int i = 0;i < n;i++){
      int a = ps[i].zero;
      int b = ps[i].one;
      //cout << a << ' ' << b << '\n';
      if (a%2==0 || b%2==0)ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}
