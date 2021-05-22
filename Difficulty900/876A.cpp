/// Problem Name: Trip For Meal
/// Problem Link: https://codeforces.com/problemset/problem/876/A

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
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  char ch = 'R';
  int d = 0;
  for (int i = 1;i < n;i++){
    if (ch == 'R'){
      if (a <= b){
        ch = 'O';
        d += a;
      }
      else {
        ch = 'E';
        d += b;
      }
    }
    else if (ch == 'E'){
      if (b <= c){
        ch = 'R';
        d += b;
      }
      else {
        ch = 'O';
        d += c;
      }
    }
    else {
      if (c <= a){
        ch = 'E';
        d += c;
      }
      else {
        ch = 'R';
        d += a;
      }
    }
  }
  cout << d << '\n';
  return 0;
}
