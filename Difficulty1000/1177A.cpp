/// Problem Name: Digits Sequence (Easy Edition)
/// Problem Link: https://codeforces.com/problemset/problem/1177/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 4e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int it = 1;
  int i = 1;
  int k;
  cin >> k;
  int ans = -1;
  while (true){
    int tmp = it++;
    string s;
    while (tmp){
      s += (tmp%10)+48;
      tmp /= 10;
    }
    reverse(s.begin(), s.end());
    for (int j = 0;j < s.size();j++){
      if (i == k){
        ans = s[j]-48;
        break;
      }
      i++;
    }
    if (ans >= 0)break;
  }
  cout << ans << '\n';
  return 0;
}
