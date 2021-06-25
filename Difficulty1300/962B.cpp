/// Problem Name: Students in Railway Carriage
/// Problem Link: https://codeforces.com/problemset/problem/962/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  for (int i = 0;i < n && (a || b);i++){
    if (s[i]=='*')continue;
    if (i){
      if (s[i-1]=='*'){
        if (a >= b){
          if (a){
            s[i] = 'a';
            a--;
          }
        }
        else {
          if (b)s[i] = 'b';
          b--;
        }
      }else if (s[i-1]=='a' || s[i-1]=='b'){
        if (s[i-1]=='a'){
          if (b){
            s[i] = 'b';
            b--;
          }
        }
        else {
          if (a){
            s[i] = 'a';
            a--;
          }
        }
      }else {
        if (a){
          s[i] = 'a';
          a--;
        }else if (b){
          s[i] = 'b';
          b--;
        }
      }
    }else {
      if (a >= b){s[i] = 'a';a--;}
      else {s[i] = 'b';b--;}
    }
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (s[i]=='a' || s[i]=='b')ans++;
  }
  cout << ans << '\n';
  return 0;
}
