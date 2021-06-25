/// Problem Name: Good String
/// Problem Link: https://codeforces.com/problemset/problem/1165/C

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
  int n;
  string s;
  cin >> n >> s;
  string ans;
  for (int i = 0;i < n;i++){
    int ff = i;
    int ss = i+1;
    if (ss < n){
      if (s[ff]!=s[ss]){
        ans += s[ff];
        ans += s[ss];
        i++;
      }
    }
  }
  cout << n-ans.size() << '\n';
  cout << ans << '\n';
  return 0;
}
