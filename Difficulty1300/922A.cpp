/// Problem Name: Cloning Toys
/// Problem Link: https://codeforces.com/problemset/problem/922/A

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
  int x, y;
  cin >> x >> y;
  if (y==0)cout << "no" << '\n';
  else if (y==1){
    if (x==0)cout << "yes" << '\n';
    else cout << "no" << '\n';
  }
  else if (x+1 >= y && x%2 != y%2)cout << "yes" << '\n';
  else cout << "no" << '\n';
  return 0;
}
