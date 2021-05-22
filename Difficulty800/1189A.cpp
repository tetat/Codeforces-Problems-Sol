/// Problem Name: Keanu Reeves
/// Problem Link: https://codeforces.com/problemset/problem/1189/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

bool check(string s,int n){
  int zero = 0;
  int one = 0;
  for (int i = 0;i < n;i++){
    if (s[i]==48)zero++;
    else one++;
  }
  return zero != one;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (check(s, n))cout << 1 << '\n' << s << '\n';
  else {
    cout << 2 << '\n';
    cout << s[0] << ' ';
    s.erase(s.begin());
    cout << s << '\n';
  }
  return 0;
}
