/// Problem Name: New Skateboard
/// Problem Link: https://codeforces.com/problemset/problem/628/B

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  Long ans = 0;
  for (int i = 0;i < n;i++){
    if ((s[i]-48)%4==0)ans++;
  }
  for (int i = 1;i < n;i++){
    int num = s[i-1]-48;
    num = (num*10)+(s[i]-48);
    if (num%4==0)ans += i;
  }
  cout << ans << '\n';
  return 0;
}
