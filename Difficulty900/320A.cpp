/// Problem Name: Magic Numbers
/// Problem Link: https://codeforces.com/problemset/problem/320/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
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

const int MAXN = 10;
int d[MAXN+1];

int main()
{
  faster()
  string s;
  cin >> s;
  for (int i = 0;i < s.size();i++){
    d[s[i]-48]++;
  }
  bool ans = true;
  if (d[0] || !d[1])ans = false;
  else if (d[2] || d[3] || d[5] || d[6] || d[7] || d[8] || d[9])ans = false;
  for (int i = 0;i < s.size(); ){
    if (s[i] == '1'){
      int cnt = 0;
      i++;
      while (i < s.size() && s[i] != '1'){
        i++;cnt++;
      }
      if (cnt > 2){
        ans = false;
        break;
      }
    }
    else {
      ans = false;
      break;
    }
  }
  if (ans)cout << "YES" << newline;
  else cout << "NO" << newline;
  return 0;
}
