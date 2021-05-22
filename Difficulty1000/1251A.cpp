/// Problem Name: Broken Keyboard
/// Problem Link: https://codeforces.com/problemset/problem/1251/A

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
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    int len = s.size();
    if (len==1)cout << s << '\n';
    else {
      for (int i = 0;i < len-1;i++){
        if (s[i] == s[i+1]){
          s[i] = 'A';
          s[i+1] = 'A';
        }
      }
      string ans;
      vector <int> mark(26, 0);
      for (int i = 0;i < len;i++){
        if (s[i] != 'A')mark[s[i]-97]++;
      }
      for (int i = 0;i < 26;i++){
        if (mark[i])ans += (i+97);
      }
      cout << ans << '\n';
    }
  }
  return 0;
}
