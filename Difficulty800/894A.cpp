/// Problem Name: QAQ
/// Problem Link: https://codeforces.com/problemset/problem/894/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  string s, r;
  cin >> s;
  int n = s.size();
  for (int i = 0;i < n;i++){
    if (s[i] == 'Q')r += s[i];
    if (s[i] == 'A')r += s[i];
  }
  int len = r.size();
  int ans = 0;
  for (int i = 0;i < len;i++){
    if (r[i] == 'Q'){
      int A = 0;
      for (int j = i;j < len;j++){
        if (r[j] == 'A')A++;
        if (r[j] == 'Q')ans += A;
      }
    }
  }
  cout << ans << newline;
  return 0;
}
