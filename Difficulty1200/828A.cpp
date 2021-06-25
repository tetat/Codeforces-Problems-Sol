/// Problem Name: Restaurant Tables
/// Problem Link: https://codeforces.com/problemset/problem/828/A

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
  int n, a, b, el;
  cin >> n >> a >> b;
  int den = 0;
  int c = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el==2){
      if (b>0)b--;
      else den += 2;
    }else {
      if (a>0)a--;
      else if (b>0){
        c++;
        b--;
      }
      else if (c>0)c--;
      else den++;
    }
  }
  cout << den << '\n';
  return 0;
}
