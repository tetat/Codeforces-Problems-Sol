/// Problem Name: Anton and currency you all know
/// Problem Link: https://codeforces.com/problemset/problem/508/B

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
  string s;
  cin >> s;
  int len = s.size();
  string ans = "-1";
  for (int i = 0;i < len-1;i++){
    int temp = s[i]-48;
    if (temp%2 == 0){
      if (temp < (s[len-1]-48)){
        swap(s[i], s[len-1]);
        cout << s << newline;
        return 0;
      }
    }
  }
  for (int i = len-2;i >= 0;i--){
    int temp = s[i]-48;
    if (temp%2 == 0){
      swap(s[i], s[len-1]);
      cout << s << newline;
      return 0;
    }
  }
  cout << ans << newline;
  return 0;
}
