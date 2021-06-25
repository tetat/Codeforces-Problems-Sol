/// Problem Name: Yuhao and a Parenthesis
/// Problem Link: https://codeforces.com/problemset/problem/1097/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int zero = 0;
int ff[N+1];
int ss[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  string s;
  for (int i = 0;i < n;i++){
    cin >> s;
    int op = 0;
    int cl = 0;
    for (int j = 0;j < s.size();j++){
      if (s[j]=='(')op++;
      else {
        if (op)op--;
        else cl++;
      }
    }
    if (op && cl)continue;
    if (op)ff[op]++;
    else if (cl)ss[cl]++;
    else zero++;
    //cout << op << ' ' << cl << '\n';
  }
  //cout << zero << '\n';
  int ans = zero/2;
  for (int i = 1;i <= N;i++){
    ans += min(ff[i], ss[i]);
  }
  cout << ans << '\n';
  return 0;
}
