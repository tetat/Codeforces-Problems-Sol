/// Problem Name: Lucky Ticket
/// Problem Link: https://codeforces.com/problemset/problem/146/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e9;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int sum = 0;
  for (int i = 0;i < n;i++){
    if (s[i]!='4' && s[i]!='7'){
      sum = -1;
      break;
    }
    sum += s[i]-48;
  }
  int half = 0;
  for (int i = 0;i < n/2;i++){
    half += s[i]-48;
  }
  //cout << sum << ' ' << half << '\n';
  if ((sum-half) == half)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
