/// Problem Name: Codehorses T-shirts
/// Problem Link: https://codeforces.com/problemset/problem/1000/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <string> s1(n), s2(n);
  vector <string> a, b;
  for (int i = 0;i < n;i++){
    cin >> s1[i];
  }
  for (int i = 0;i < n;i++){
    cin >> s2[i];
  }
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (s1[i] == s2[j]){
        s1[i] = "-1";
        s2[j] = "-1";
        break;
      }
    }
  }
  for (int i = 0;i < n;i++){
    if (s1[i] != "-1")a.pb(s1[i]);
    if (s2[i] != "-1")b.pb(s2[i]);
  }
  int ans = 0;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  n = a.size();
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (a[i].size()==b[j].size() && b[j]!="-1"){
        int d = 0;
        for (int k = 0;k < a[i].size();k++){
          if (a[i][k]!=b[j][k])d++;
        }
        b[j] = "-1";
        ans += d;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
