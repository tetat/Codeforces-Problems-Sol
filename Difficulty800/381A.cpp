/// Problem Name: Sereja and Dima
/// Problem Link: https://codeforces.com/problemset/problem/381/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define lol long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define test cout << "DEBUG\n"
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  cin >> n;
  VE <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int S = 0;
  int D = 0;
  int L = 0;
  int R = n-1;
  bool ok = true;
  while (n--){
    if (v[R] > v[L]){
      if (ok){
        S += v[R];
        ok = false;
      }
      else {
        D += v[R];
        ok = true;
      }
      R--;
    }
    else {
      if (ok){
        S += v[L];
        ok = false;
      }
      else {
        D += v[L];
        ok = true;
      }
      L++;
    }
  }
  cout << S << space << D << newline;
  return 0;
}
