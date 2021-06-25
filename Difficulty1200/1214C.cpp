/// Problem Name: Bad Sequence
/// Problem Link: https://codeforces.com/problemset/problem/1214/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  stack <char> S;
  if (n%2){
    cout << "No" << '\n';
    return 0;
  }
  bool ok = true;
  int cnt = 0;
  for (int i = 0;i < n;i++){
    if (s[i]=='(')S.push(s[i]);
    else {
      if (S.size())S.pop();
      else if (cnt){
        cout << "No" << '\n';
        return 0;
      }else cnt++;
    }
  }
  if ((cnt==0 && S.empty()) || (cnt==1 && S.size()==1))cout << "Yes" << '\n';
  else cout << "No" << '\n';
  return 0;
}
