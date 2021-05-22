/// Problem Name: Lever
/// Problem Link: https://codeforces.com/problemset/problem/376/A

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
  string s;
  cin >> s;
  int n = s.size();
  vector <int> v(n+1, 0);
  int mid;
  for (int i = 1;i <= n;i++){
    if (s[i-1] == '^'){v[i] = -1;mid = i;}
    else if (s[i-1] != '=')v[i] = s[i-1]-48;
  }
  Long sum = 0;
  for (int i = 1;i <= n;i++){
    if (i != mid){
      sum += Long(v[i])*(i-mid);
    }
  }
  if (sum < 0)cout << "left" << '\n';
  else if (sum > 0)cout << "right" << '\n';
  else cout << "balance" << '\n';
  return 0;
}
