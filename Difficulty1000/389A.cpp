/// Problem Name: Fox and Number Game
/// Problem Link: https://codeforces.com/problemset/problem/389/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int gc(int a, int b){
  if (b==0)return a;
  else return gc(b, a%b);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int d = v[0];
  for (int i = 0;i < n;i++){
    d = gc(d, v[i]);
  }
  //cout << d << '\n';
  cout << n*d << '\n';
  return 0;
}
