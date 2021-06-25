/// Problem Name: Substring Game in the Lesson
/// Problem Link: https://codeforces.com/problemset/problem/1220/C

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
  string s;
  cin >> s;
  int n = s.size();
  vector <int> mark(26, 0);
  for (int i = 0;i < n;i++){
    int d = s[i]-97;
    bool ok = false;
    d--;
    while (d >= 0){
      if (mark[d]){
        ok = true;
        break;
      }
      d--;
    }
    if (ok)cout << "Ann" << '\n';
    else cout << "Mike" << '\n';
    mark[s[i]-97]++;
  }
  return 0;
}
