/// Problem Name: Hexadecimal's theorem
/// Problem Link: https://codeforces.com/problemset/problem/199/A

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
  vector <Long> v;
  v.pb(0);
  v.pb(1);
  int i = 1;
  while (v[i]+v[i-1] <= N){
    v.pb(v[i]+v[i-1]);
    i++;
  }
  Long n;
  cin >> n;
  bool no = true;
  int len = 45;
  for (int i = 0;i < len;i++){
    for (int j = 0;j < len;j++){
      for (int k = 0;k < len;k++){
        if (v[i]+v[j]+v[k] == n){
          cout << v[i] << ' ' << v[j] << ' ' << v[k] << '\n';
          no = false;
          break;
        }
      }
      if (!no)break;
    }
    if (!no)break;
  }
  if (no)cout << "I'm too stupid to solve this problem" << '\n';
  return 0;
}
