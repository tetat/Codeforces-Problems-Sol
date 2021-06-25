/// Problem Name: Sign Flipping
/// Problem Link: https://codeforces.com/problemset/problem/1375/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
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
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    for (int i = 0;i < n;i++){
      if (i%2){
        if (v[i] < 0)v[i] = -v[i];
      }else {
        if (v[i] > 0)v[i] = -v[i];
      }
    }
    for (int i = 0;i < n;i++){
      cout << v[i] << ' ';
    }cout << '\n';
  }
  return 0;
}
