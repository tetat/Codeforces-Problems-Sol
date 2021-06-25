/// Problem Name: Chewbaсca and Number
/// Problem Link: https://codeforces.com/problemset/problem/514/A

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
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

int dp[110];
int inf = 101;

int main()
{
  faster()
  int t, ca = 0;
  string s;
  cin >> s;
  int len = s.size();
  for (int i = 0;i < len;i++){
    int d = s[i]-48;
    if (9-d < d){
      if (i == 0 && 9-d == 0)continue;
      s[i] = (9-d)+48;
    }
  }
  cout << s << newline;
  return 0;
}
