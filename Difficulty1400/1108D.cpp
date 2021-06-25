/// Problem Name: Diverse Garland
/// Problem Link: https://codeforces.com/problemset/problem/1108/D

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

string s;
string c = "RBG";

void gen(int lim, char a, int st){
  for (int i = st-1; lim-- ;i -= 2){
    char b = a;
    if (i-1 >= 0)b = s[i-1];
    for (int j = 0;j < 3;j++){
      if (c[j]!=a && c[j]!=b){
        s[i] = c[j];
        break;
      }
    }
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n >> s;
  int i = 0;
  int cnt = 0;
  int k = 0;
  while (i < n){
    while (i < n && s[i]=='R'){
      cnt++;
      i++;
    }
    if (cnt > 1){
      k += cnt/2;
      gen(cnt/2, 'R', i-1);
    }
    cnt = 0;
    while (i < n && s[i]=='B'){
      cnt++;
      i++;
    }
    if (cnt > 1){
      k += cnt/2;
      gen(cnt/2, 'B', i-1);
    }
    cnt = 0;
    while (i < n && s[i]=='G'){
      cnt++;
      i++;
    }
    if (cnt > 1){
      k += cnt/2;
      gen(cnt/2, 'G', i-1);
    }
    cnt = 0;
  }
  cout << k << '\n';
  cout << s <<  '\n';
  return 0;
}
