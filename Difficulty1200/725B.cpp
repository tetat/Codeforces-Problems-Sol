/// Problem Name: Food on the Plane
/// Problem Link: https://codeforces.com/problemset/problem/725/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

string rp = "fedabc";

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  Long n = 0;
  for (int i = 0;i < int(s.size()-1);i++){
    n = (n*10)+(s[i]-48);
  }
  Long ans = 0;
  if (n%4==1 || n%4==2){
    ans += n-1;
    ans += (n/2)*6;
    for (int i = 0;i < 6;i++){
      if (rp[i] == s[int(s.size()-1)]){
        ans += i+1;
        break;
      }
    }
  }else {
    ans += n-3;
    ans += ((n/2)-1)*6;
    for (int i = 0;i < 6;i++){
      if (rp[i] == s[int(s.size()-1)]){
        ans += i+1;
        break;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
