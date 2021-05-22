/// Problem Name: Multiply by 2, divide by 6
/// Problem Link: https://codeforces.com/problemset/problem/1374/B

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
    int two = 0;
    int three = 0;
    while (n%2==0){
      two++;
      n /= 2;
    }
    while (n%3==0){
      three++;
      n /= 3;
    }
    if (n > 1 || three < two)cout << "-1" << '\n';
    else cout << (three-two)+three << '\n';
  }
  return 0;
}
