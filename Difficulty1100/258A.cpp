/// Problem Name: Little Elephant and Bits
/// Problem Link: https://codeforces.com/problemset/problem/258/A

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

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  string s;
  cin >> s;
  int len = s.size();
  int cut = len-1;
  for (int i = 0;i < len;i++){
    if (s[i]==48){
      cut = i;
      break;
    }
  }
  s.erase(s.begin()+cut);
  cout << s << '\n';
  return 0;
}
