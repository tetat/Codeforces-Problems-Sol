/// Problem Name: Make It Good
/// Problem Link: https://codeforces.com/problemset/problem/1385/C

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

const int N = 1e4;

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
    int i = n-1;
    int cut = 1;
    while (i > 0 && v[i]<=v[i-1]){
      cut++;
      i--;
    }
    while (i > 0 && v[i] >= v[i-1]){
      cut++;
      i--;
    }
    cout << n-cut << '\n';
  }
  return 0;
}
