/// Problem Name: Snow Footprints
/// Problem Link: https://codeforces.com/problemset/problem/298/A

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
  int n, el;
  cin >> n;
  string s;
  cin >> s;
  int i = 0;
  while (i < n && s[i]!='R')i++;
  //cout << i << '\n';
  if (i != n){
    int j = n-1;
    int L = 0;
    while (j >= 0 && s[j]!='R'){
      if (s[j]=='L')L++;
      j--;
    }
    if (L==0)j++;
    cout << i+1 << ' ' << j+1 << '\n';
  }else {
    i--;
    while (i >= 0 && s[i]!='L')i--;
    int j = 0;
    while (j < n && s[j]!='L')j++;
    j--;
    cout << i+1 << ' ' << j+1 << '\n';
  }
  return 0;
}
