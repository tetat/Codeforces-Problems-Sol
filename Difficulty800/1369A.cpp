/// Problem Name: FashionabLee
/// Problem Link: https://codeforces.com/problemset/problem/1369/A

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    int cnt = 0;
    while (n%2==0){
      n /= 2;
      cnt++;
    }
    if (cnt < 2)cout << "NO" << '\n';
    else cout << "YES" << '\n';
  }
  return 0;
}
