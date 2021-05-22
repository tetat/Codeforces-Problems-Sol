/// Problem Name: Erasing Zeroes
/// Problem Link: https://codeforces.com/problemset/problem/1303/A

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
    string s;
    cin >> s;
    int len = s.size();
    int zero = 0;
    for (int i = 0;i < len;i++){
      if (s[i] == '0')zero++;
    }
    for (int i = 0;i < len;i++){
      if (s[i] == '1')break;
      zero--;
    }
    for (int i = len-1;i >= 0;i--){
      if (s[i] == '1')break;
      zero--;
    }
    if (zero < 0)zero = 0;
    cout << zero << '\n';
  }
  return 0;
}
