/// Problem Name: Valued Keys
/// Problem Link: https://codeforces.com/problemset/problem/801/B

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
  string x, y, z;
  cin >> x >> z;
  int n = x.size();
  for (int i = 0;i < n;i++){
    if (x[i] == z[i]){
      y += 'z';
    }
    else if (x[i] < z[i]){
      y = "-1";
      break;
    }
    else {
      y += z[i];
    }
  }
  cout << y << '\n';
  return 0;
}
