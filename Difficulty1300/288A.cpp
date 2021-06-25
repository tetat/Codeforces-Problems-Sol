/// Problem Name: Polo the Penguin and Strings
/// Problem Link: https://codeforces.com/problemset/problem/288/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e4;

int main()
{
  //FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  string ans;
  if (k==1){
    if (n==1)ans = 'a';
    else ans = "-1";
  }else if (n < k){
    ans = "-1";
  }else {
    k -= 2;
    for (int i = 0;i < n-k;i++){
      if (i%2)ans += 'b';
      else ans += 'a';
    }
    for (int i = 0;i < k;i++){
      ans += (i+99);
    }
  }
  cout << ans << '\n';
  return 0;
}
