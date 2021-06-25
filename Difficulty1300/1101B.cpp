/// Problem Name: Accordion
/// Problem Link: https://codeforces.com/problemset/problem/1101/B

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
  string s;
  cin >> s;
  int n = s.size();
  int L = 0;
  string lft;
  for (int i = 0;i < n;i++){
    if (s[i]=='['){
      if (lft.empty())lft += '[';
    }
    if (s[i]==':'){
      if (lft.size()==1)lft += ':';
    }
    if (lft.size()==2){
      L = i;
      break;
    }
  }
  int R = n-1;
  string rgt;
  for (int i = n-1;i > L;i--){
    if (s[i]==']'){
      if (rgt.empty())rgt += ']';
    }
    if (s[i]==':'){
      if (rgt.size()==1)rgt += ':';
    }
    if (rgt.size()==2){
      R = i;
      break;
    }
  }
  reverse(rgt.begin(), rgt.end());
  string mid;
  for (L++;L < R;L++){
    if (s[L]=='|')mid += '|';
  }
  int ans = lft.size() + mid.size() + rgt.size();
  if (lft.size() != 2 || rgt.size()!=2)ans = -1;
  cout << ans << '\n';
  return 0;
}
