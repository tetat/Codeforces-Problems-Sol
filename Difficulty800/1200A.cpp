/// Problem Name: Hotelier
/// Problem Link: https://codeforces.com/problemset/problem/1200/A

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

const int N = 50;

int main()
{
  faster()
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  string ans(10, '0');
  for (int i = 0;i < n;i++){
    if (s[i] == 'L'){
      for (int j = 0;j < 10;j++){
        if (ans[j] == '0'){
          ans[j] = '1';
          break;
        }
      }
    }
    else if (s[i] == 'R'){
      for (int j = 9;j >= 0;j--){
        if (ans[j] == '0'){
          ans[j] = '1';
          break;
        }
      }
    }
    else ans[s[i]-48] = '0';
  }
  cout << ans << newline;
  return 0;
}
