/// Problem Name: Broken Clock
/// Problem Link: https://codeforces.com/problemset/problem/722/A

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int hh = s[0]-48;
  hh = (hh*10)+(s[1]-48);
  if (n==24 && hh > 23){
    if (s[0] > '2' && s[1] < '4'){
      if (s[0]-'2' <= '9'-s[0])s[0] = '2';
      else s[0] = '0';
    }else if (s[0] >= '2'){
      if (s[0]-'1' <= '9'-s[0])s[0] = '1';
      else s[0] = '0';
    }
  }
  if (n==12 && (hh > 12 || hh < 1)){
    if (hh==0)s[0] = '1';
    else {
      if (s[0] > '1' && s[1] < '3'){
        if ((s[1]=='1' || s[1]=='2')){
          if (s[0]-'1' <= '9'-s[0])s[0] = '1';
          else s[0] = '0';
        }else s[0] = '0';
      }else if (s[0] >= '1')s[0] = '0';
    }
    if (s[0]=='0' && s[1]=='0')s[0] = '1';
  }
  if (s[3] > '5'){
    if (s[3]-'5' <= '9'-s[3])s[3] = '5';
    else s[3] = '0';
  }
  cout << s << '\n';
  return 0;
}
