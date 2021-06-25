/// Problem Name: Good String
/// Problem Link: https://codeforces.com/problemset/problem/1140/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    string s;
    cin >> n >> s;
    int R = 0;
    int L = 0;
    int i = 0;
    while (i < n && s[i]=='<'){L++;i++;}
    i = n-1;
    while (i >= 0 && s[i]=='>'){R++;i--;}
    cout << min(R, L) << '\n';
  }
  return 0;
}
