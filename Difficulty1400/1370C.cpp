/// Problem Name: Number Game
/// Problem Link: https://codeforces.com/problemset/problem/1370/C

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

bool isprime(int n){
  if (n < 2)return false;
  if (n==2)return true;
  if (n%2==0)return false;
  for (int i = 3;i*i <= n;i++){
    if (n%i==0)return false;
  }
  return true;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    string ans = "Ashishgup";
    if (n==1)ans = "FastestFinger";
    else if (n%2==0 && n!=2){
      if (isprime(n/2))ans = "FastestFinger";
      else {
        while (n%2==0)n /= 2;
        if (n==1)ans = "FastestFinger";
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
