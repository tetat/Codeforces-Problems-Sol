/// Problem Name: Chess For Three
/// Problem Link: https://codeforces.com/problemset/problem/893/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
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
  int n, el;
  cin >> n;
  string ans = "YES";
  int a = 1;
  int b = 2;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (a!=el && b!=el)ans = "NO";
    else {
      if (a==el){
        if (a+b <= 3)b = a+b;
        else b = abs(a-b);
      }else {
        if (a+b <= 3)a = a+b;
        else a = abs(a-b);
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
