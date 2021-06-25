/// Problem Name: Fadi and LCM
/// Problem Link: https://codeforces.com/problemset/problem/1285/C

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
  lol n;
  cin >> n;
  lol S = 1;
  lol B = n;
  //VE <pair <lol, lol> > v;
  for (lol i = 1;i*i <= n;i++){
    if (n%i == 0){
      lol a = i;
      lol b = n/i;
      if ((a*b)/__gcd(a,b) == n){
        S = a;
        B = b;
      }
    }
  }
  cout << S << space << B << newline;
  return 0;
}
