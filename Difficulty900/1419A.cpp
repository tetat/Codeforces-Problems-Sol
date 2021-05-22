/// Problem Name: Digit Game
/// Problem Link: https://codeforces.com/problemset/problem/1419/A

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one_odd = 0;
    int two_even = 0;
    for (int i = 0;i < n;i++){
      if (i%2){
        if ((s[i]-48)%2 == 0)two_even++;
      }else {
        if ((s[i]-48)%2 == 1)one_odd++;
      }
    }
    if (n%2){
      if (one_odd)cout << "1" << '\n';
      else cout << "2" << '\n';
    }else {
      if (two_even)cout << "2" << '\n';
      else cout << "1" << '\n';
    }
  }
  return 0;
}
