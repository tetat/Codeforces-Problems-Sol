/// Problem Name: Lucky Mask
/// Problem Link: https://codeforces.com/problemset/problem/146/B

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
  int a, b;
  cin >> a >> b;
  int c = a+1;
  while (true){
    int x = c;
    int t_b = 0;
    while (x){
      int tm = x%10;
      if (tm == 4 || tm==7){
        t_b = (t_b*10)+tm;
      }
      x /= 10;
    }
    int cm = 0;
    while (t_b){
      cm = (cm*10) + (t_b%10);
      t_b /= 10;
    }
    if (cm == b)break;
    c++;
  }
  cout << c << '\n';
  return 0;
}
