/// Problem Name: Make a Square
/// Problem Link: https://codeforces.com/problemset/problem/962/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  Long n;
  cin >> n;
  int ans = 11;
  Long ten = 10;
  for (Long i = 1;i*i <= n;i++){
    Long ff = n;
    Long ss = i*i;
    while (ff && ss){
      if (ff%ten == ss%ten){
        ff /= ten;
        ss /= ten;
      }else ff /= ten;
    }
    if (ss==0){
      ff = n;
      ss = i*i;
      int tot = 0;
      int rem = 0;
      while (ff){tot++;ff/=ten;}
      while (ss){rem++;ss/=ten;}
      ans = min(ans, tot-rem);
    }
  }
  if (ans==11)ans = -1;
  cout << ans << '\n';
  return 0;
}
