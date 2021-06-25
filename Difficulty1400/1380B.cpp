/// Problem Name: Universal Solution
/// Problem Link: https://codeforces.com/problemset/problem/1380/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    string a;
    int R = 0;
    int S = 0;
    int P = 0;
    for (int i = 0;i < s.size();i++){
      if (s[i]=='R')R++;
      if (s[i]=='S')S++;
      if (s[i]=='P')P++;
    }
    int mx = max(R, max(S, P));
    for (int i = 0;i < s.size();i++){
      if (mx==R)a += 'P';
      else if (mx==S)a += 'R';
      else if (mx==P)a += 'S';
    }
    cout << a << '\n';
  }
  return 0;
}
