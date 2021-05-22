/// Problem Name: Love "A"
/// Problem Link: https://codeforces.com/problemset/problem/1146/A

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
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  int a = 0;
  int others = 0;
  for (int i = 0;i < n;i++){
    if (s[i]==97)a++;
    else others++;
  }
  if (a <= others){
    others = a-1;
  }
  cout << a+others << '\n';
  return 0;
}
