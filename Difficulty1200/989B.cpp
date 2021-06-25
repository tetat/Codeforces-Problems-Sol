/// Problem Name: A Tide of Riverscape
/// Problem Link: https://codeforces.com/problemset/problem/989/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, p;
  cin >> n >> p;
  string s;
  cin >> s;
  bool ok = true;
  for (int i = 0, j = p;j < n;i++, j++){
    if (s[i]=='.' || s[j]=='.'){
      if (s[i]=='.' && s[j]=='.'){
        s[i] = '0';
        s[j] = '1';
      }else if (s[i]=='.'){
        if (s[j]=='1')s[i] = '0';
        else s[i] = '1';
      }else if (s[j]=='.'){
        if (s[i]=='1')s[j] = '0';
        else s[j] = '1';
      }
      ok = false;
      break;
    }
    if (s[i] != s[j]){
      ok = false;
      break;
    }
  }
  if (ok)cout << "NO" << '\n';
  else {
    for (int i = 0;i < n;i++){
      if (s[i]=='.')s[i] = '1';
    }
    cout << s << '\n';
  }
  return 0;
}
