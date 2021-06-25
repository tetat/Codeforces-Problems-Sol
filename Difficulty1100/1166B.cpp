/// Problem Name: All the Vowels Please
/// Problem Link: https://codeforces.com/problemset/problem/1166/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s = "aeiou";
  string ans = "-1";
  int k;
  cin >> k;
  int n = 0;
  int m = 0;
  for (int i = 1;i*i <= k;i++){
    if (k%i==0){
      n = i;
      m = k/i;
    }
  }
  //cout << n << ' ' << m << '\n';
  if (n > 4 && m > 4){
    ans.clear();
    int d = -1;
    for (int i = 0;i < k;i++){
      if (i%n==0)d++;
      d = d%n;
      ans += s[(i+d)%5];
    }
//    for (int i = 0;i < k;i++){
//      cout << ans[i];
//      if (i && i%n==0)cout << '\n';
//    }
  }
  //cout << ans.size() << '\n';
  //cout << '\n';
  cout << ans << '\n';
  return 0;
}
