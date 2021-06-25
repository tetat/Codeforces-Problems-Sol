/// Problem Name: Drazil and Factorial
/// Problem Link: https://codeforces.com/problemset/problem/515/C

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

const int N = 100000;

int main()
{
  faster()
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  string ans;
  for (int i = 0;i < n;i++){
    if (s[i]!='0' && s[i]!='1')ans += s[i];
  }
  for (int i = 0;i < ans.size();i++){
    if (ans[i] == '9'){
      ans[i] = '7';
      ans += '3';
      ans += '3';
      ans += '2';
    }
    else if (ans[i] == '8'){
      ans[i] = '7';
      ans += '2';
      ans += '2';
      ans += '2';
    }
    else if (ans[i] == '6'){
      ans[i] = '5';
      ans += '3';
    }
    else if (ans[i] == '4'){
      ans[i] = '3';
      ans += '2';
      ans += '2';
    }
  }
  sort(all(ans), greater<char>());
  cout << ans << newline;
  return 0;
}
