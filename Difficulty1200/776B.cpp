/// Problem Name: Sherlock and his girlfriend
/// Problem Link: https://codeforces.com/problemset/problem/776/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> jew(n);
  vector <int> mark(n+2, 1);
  for (int i = 4;i <= n+1;i += 2)mark[i] = 0;
  for (int i = 3;i*i <= n+1;i++){
    if (mark[i]){
      for (int j = i*i;j <= n+1;j += i+i){
        mark[j] = 0;
      }
    }
  }
  //for (int i = 2;i <= n+1;i++)cout << mark[i] << ' ';cout << '\n';
  int col = 1;
  for (int i = 0;i < n;i++){
    if (mark[i+2])jew[i] = col;
  }
  if (n>2){
    col++;
    for (int i = 0;i < n;i++){
      if (mark[i+2]==0)jew[i] = col;
    }
  }
  cout << col << '\n';
  for (int i = 0;i < n;i++){
    cout << jew[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
