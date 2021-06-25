/// Problem Name: Ternary XOR
/// Problem Link: https://codeforces.com/problemset/problem/1328/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    string x;
    cin >> n >> x;
    string a, b;
    a += '1';
    b += '1';
    int d = 0;
    for (int i = 1;i < n;i++){
      if (d==0){
        if (x[i]=='0'){
          a += '0';
          b += '0';
        }
        else if (x[i]=='2'){
          a += '1';
          b += '1';
        }
        else {
          a += '1';
          b += '0';
          d = 1;
        }
      }
      else {
        if (x[i]=='0'){
          a += '0';
          b += '0';
        }
        else if (x[i]=='2'){
          a += '0';
          b += '2';
        }
        else {
          a += '0';
          b += '1';
        }
      }
    }
    cout << a << '\n' << b << '\n';
  }
  return 0;
}
