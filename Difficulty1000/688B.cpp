/// Problem Name: Lovely Palindromes
/// Problem Link: https://codeforces.com/problemset/problem/688/B

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
  string s;
  cin >> s;
  int len = s.size();
  string ans;
  for (int i = 0;i < len;i++)ans += s[i];
  for (int i = len-1;i >= 0;i--)ans += s[i];
  cout << ans << newline;
  return 0;
}
