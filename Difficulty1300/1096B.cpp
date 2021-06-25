/// Problem Name: Substring Removal
/// Problem Link: https://codeforces.com/problemset/problem/1096/B

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

const int N = 1e6;

Long m = 998244353;

int main()
{
  faster();
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  Long pr = 0;
  while (s[0]==s[pr])pr++;
  Long su = n-1;
  while (s[n-1]==s[su])su--;
  su = n - (su+1);
  //cout << pr << ' ' << su << '\n';
  if (s[0]==s[n-1]){
    cout << ((pr+1)*(su+1)) % m << '\n';
  }else cout << (pr+su+1) % m << '\n';
  return 0;
}
